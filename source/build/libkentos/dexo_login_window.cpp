#include "dexo_login_window.h"

#include "imgui_internal.h"

#include <cmath>
#include <cstring>

#ifdef DEXO_JOST_SIZE
extern "C" unsigned char dexo_jost[DEXO_JOST_SIZE];
extern "C" const unsigned char dexo_icons[DEXO_ICONS_SIZE];
#endif

void reject_dexo_login(DexoLoginWindow& state, double now_seconds)
{
    std::memset(state.key, 0, sizeof(state.key));
    state.key_cursor = 0;
    state.key_scroll = 0.0f;
    state.key_focused = false;
    state.waiting = false;
    state.request_pending = false;
    state.rejection_until = static_cast<float>(now_seconds) + 3.0f;
}

bool load_dexo_login_font(const char* font_path, const char* icon_path,
                          const char* droid_sans_path)
{
    ImGuiIO& io = ImGui::GetIO();
    static const ImWchar text_ranges[] = {
        0x0020, 0x017f,
        0x0400, 0x052f,
        0x2de0, 0x2dff,
        0xa640, 0xa69f,
        0
    };
    ImFont* font = nullptr;
    if (font_path != nullptr) {
        font = io.Fonts->AddFontFromFileTTF(font_path, 22.0f, nullptr, text_ranges);
    }
#ifdef DEXO_JOST_SIZE
    else {
        static const ImVector<ImWchar> embedded_ranges = [&io] {
            static const ImWchar latin_extended[] = {0x0100, 0x017f, 0};
            ImFontGlyphRangesBuilder builder;
            builder.AddRanges(io.Fonts->GetGlyphRangesDefault());
            builder.AddRanges(io.Fonts->GetGlyphRangesCyrillic());
            builder.AddRanges(latin_extended);
            ImVector<ImWchar> ranges;
            builder.BuildRanges(&ranges);
            return ranges;
        }();
        ImFontConfig config;
        config.FontDataOwnedByAtlas = false;
        font = io.Fonts->AddFontFromMemoryTTF(dexo_jost, sizeof(dexo_jost),
                                             22.0f, &config, embedded_ranges.Data);
    }
#endif
    if (font == nullptr) {
        return false;
    }
    static const ImWchar icon_ranges[] = {0xf000, 0xf3ff, 0};
    ImFontConfig icon_config;
    icon_config.MergeMode = true;
    icon_config.PixelSnapH = true;
    if (icon_path != nullptr) {
        if (io.Fonts->AddFontFromFileTTF(icon_path, 20.0f,
                                         &icon_config, icon_ranges) == nullptr) {
            return false;
        }
    }
#ifdef DEXO_ICONS_SIZE
    else if (io.Fonts->AddFontFromMemoryCompressedTTF(
                 dexo_icons, sizeof(dexo_icons), 20.0f, &icon_config, icon_ranges) == nullptr) {
        return false;
    }
#endif
    if (droid_sans_path != nullptr) {
        if (io.Fonts->AddFontFromFileTTF(droid_sans_path, 16.0f) == nullptr) {
            return false;
        }
    } else {
        ImFontConfig default_config;
        default_config.SizePixels = 16.0f;
        io.Fonts->AddFontDefault(&default_config);
    }
    if (font_path != nullptr) {
        io.FontDefault = font;
    } else {
        io.FontGlobalScale = 1.0f;
    }
    return true;
}

static void draw_login_panel()
{
    ImDrawList* draw = ImGui::GetWindowDrawList();
    const ImVec2 origin = ImGui::GetWindowPos();
    const ImVec2 size = ImGui::GetWindowSize();
    const ImVec2 end(origin.x + size.x, origin.y + size.y);
    draw->AddRectFilled(origin, end, IM_COL32(23, 29, 38, 175), 16.0f);
    draw->AddRect(origin, end, 0x19ffffff, 16.0f, 0, 1.5f);

    const auto draw_label = [&](const char* label, float y, float scale, ImU32 color) {
        ImGui::SetWindowFontScale(scale);
        const float x = origin.x + (size.x - ImGui::CalcTextSize(label).x) * 0.5f;
        draw->AddText(ImVec2(x, origin.y + y), color, label);
        ImGui::SetWindowFontScale(1.0f);
    };
    draw_label("DEXO LOGIN", 26.0f, 1.7f, IM_COL32(255, 255, 255, 235));
    draw_label("Enter your license key", 64.0f, 0.85f, IM_COL32(255, 255, 255, 140));
}

bool draw_login_button(const char* label, float width, float height, ImU32 fill,
                       ImU32 border, ImU32 text)
{
    const ImVec2 origin = ImGui::GetCursorScreenPos();
    ImDrawList* draw = ImGui::GetWindowDrawList();
    if (width <= 0.0f) {
        width = ImGui::GetContentRegionAvail().x;
    }
    const ImVec2 size(width, height);
    const bool pressed = ImGui::InvisibleButton(label, size);
    const ImU32 background = ImGui::IsItemActive() ? 0x23ffffff
        : ImGui::IsItemHovered() ? 0x19ffffff : fill;
    draw->AddRectFilled(origin, ImVec2(origin.x + size.x, origin.y + size.y), background, 8.0f);
    draw->AddRect(origin, ImVec2(origin.x + size.x, origin.y + size.y), border, 8.0f, 0, 1.2f);
    const ImVec2 label_size = ImGui::CalcTextSize(label);
    draw->AddText(ImVec2(origin.x + (size.x - label_size.x) * 0.5f,
                        origin.y + (size.y - label_size.y) * 0.5f), text, label);
    return pressed;
}

static int key_cursor_step(const char* text, int position, int length, int direction)
{
    do {
        position += direction;
    } while (position > 0 && position < length &&
             (static_cast<unsigned char>(text[position]) & 0xc0) == 0x80);
    return ImClamp(position, 0, length);
}

static void edit_login_key(DexoLoginWindow& state, int& length)
{
    ImGuiIO& io = ImGui::GetIO();
    int& cursor = state.key_cursor;
    if (ImGui::IsKeyPressedMap(ImGuiKey_LeftArrow))
        cursor = key_cursor_step(state.key, cursor, length, -1);
    if (ImGui::IsKeyPressedMap(ImGuiKey_RightArrow))
        cursor = key_cursor_step(state.key, cursor, length, 1);
    if (ImGui::IsKeyPressedMap(ImGuiKey_Home))
        cursor = 0;
    if (ImGui::IsKeyPressedMap(ImGuiKey_End))
        cursor = length;
    const int start = ImGui::IsKeyPressedMap(ImGuiKey_Backspace)
        ? key_cursor_step(state.key, cursor, length, -1) : cursor;
    const int end = ImGui::IsKeyPressedMap(ImGuiKey_Delete)
        ? key_cursor_step(state.key, cursor, length, 1) : cursor;
    if (start < end) {
        std::memmove(state.key + start, state.key + end, length - end + 1);
        length -= end - start;
        cursor = start;
    }
    if (ImGui::IsKeyPressedMap(ImGuiKey_Space) && !io.KeyCtrl && !io.KeyAlt &&
        !io.InputQueueCharacters.contains(static_cast<ImWchar>(' '))) {
        io.AddInputCharacter(' ');
    }
    for (ImWchar character : io.InputQueueCharacters) {
        if (character < 0x20 || character == 0x7f)
            continue;
        char encoded[5];
        ImTextCharToUtf8(encoded, character);
        const int byte_count = static_cast<int>(std::strlen(encoded));
        if (length + byte_count >= KEY_INPUT_CAPACITY)
            continue;
        std::memmove(state.key + cursor + byte_count, state.key + cursor, length - cursor + 1);
        std::memcpy(state.key + cursor, encoded, byte_count);
        cursor += byte_count;
        length += byte_count;
    }
    io.InputQueueCharacters.clear();
}

static void draw_login_key_field(DexoLoginWindow& state)
{
    ImGui::SetCursorPos(ImVec2(35.0f, 92.0f));
    const bool pressed = ImGui::InvisibleButton("##key", ImVec2(360.0f, 34.0f));
    const ImVec2 origin = ImGui::GetItemRectMin();
    const ImVec2 end = ImGui::GetItemRectMax();
    const ImVec2 clip_min(origin.x + 10.0f, origin.y + 2.0f);
    const ImVec2 clip_max(end.x - 10.0f, end.y - 2.0f);
    const ImFont* font = ImGui::GetFont();
    const float font_size = ImGui::GetFontSize();
    const auto prefix_width = [&](int offset) {
        return font->CalcTextSizeA(font_size, FLT_MAX, 0.0f, state.key, state.key + offset).x;
    };
    state.key[KEY_INPUT_CAPACITY - 1] = '\0';
    int length = static_cast<int>(std::strlen(state.key));
    state.key_cursor = ImClamp(state.key_cursor, 0, length);
    if (pressed) {
        if (!state.key_focused)
            state.key_scroll = 0.0f;
        state.key_focused = true;
        const float clicked_x = ImGui::GetIO().MousePos.x - clip_min.x + state.key_scroll;
        float nearest = std::fabs(clicked_x);
        state.key_cursor = 0;
        for (int offset = 0; offset < length;) {
            offset = key_cursor_step(state.key, offset, length, 1);
            const float distance = std::fabs(prefix_width(offset) - clicked_x);
            if (distance < nearest) {
                nearest = distance;
                state.key_cursor = offset;
            }
        }
    }
    if ((ImGui::IsMouseClicked(0) && !ImGui::IsItemHovered()) ||
        ImGui::IsKeyPressedMap(ImGuiKey_Escape)) {
        state.key_focused = false;
        state.key_scroll = 0.0f;
    }
    if (state.key_focused) {
        GImGui->WantTextInputNextFrame = 1;
        ImGui::CaptureKeyboardFromApp();
        edit_login_key(state, length);
    }
    const float cursor_x = prefix_width(state.key_cursor);
    if (state.key_focused) {
        const float visible_width = clip_max.x - clip_min.x;
        state.key_scroll = ImClamp(state.key_scroll, ImMax(0.0f, cursor_x - visible_width), cursor_x);
    }
    ImDrawList* draw = ImGui::GetWindowDrawList();
    draw->AddRectFilled(origin, end, state.key_focused ? 0x1affffff : 0x10ffffff, 8.0f);
    draw->AddRect(origin, end, state.key_focused ? 0x78ffffff : 0x28ffffff, 8.0f, 0, 1.2f);
    draw->PushClipRect(clip_min, clip_max, true);
    const float text_y = origin.y + (34.0f - font_size) * 0.5f;
    draw->AddText(font, font_size, ImVec2(clip_min.x - state.key_scroll, text_y),
                  length ? 0xfff0f0f0 : 0x64ffffff, length ? state.key : "Paste License Key...");
    if (state.key_focused && std::fmod(static_cast<float>(ImGui::GetTime()), 1.0f) < 0.55f) {
        const float x = clip_min.x + cursor_x - state.key_scroll;
        draw->AddLine(ImVec2(x, origin.y + 7.0f), ImVec2(x, end.y - 7.0f), 0xebffffff, 1.6f);
    }
    draw->PopClipRect();
}

void draw_login_spinner(float x, float y, float radius, float thickness, ImU32 color)
{
    ImDrawList* draw = ImGui::GetWindowDrawList();
    const float start = static_cast<float>(ImGui::GetTime()) * 2.8f * 2.5f;
    draw->PathClear();
    for (int segment = 0; segment <= 60; ++segment) {
        const float angle = start + (static_cast<float>(segment) / 60.0f) * 4.55530977f;
#if defined(__aarch64__) && defined(__ANDROID__)
        // Keep the operand order of the original ARM64 instructions.
        float point_x;
        float point_y;
        const float offset_x = std::cos(angle) * radius;
        asm("fadd %s0, %s1, %s2" : "=w"(point_x) : "w"(x), "w"(offset_x));
        const float offset_y = std::sin(angle) * radius;
        asm("fadd %s0, %s1, %s2" : "=w"(point_y) : "w"(y), "w"(offset_y));
#else
        const float point_x = std::cos(angle) * radius + x;
        const float point_y = std::sin(angle) * radius + y;
#endif
        draw->PathLineTo(ImVec2(point_x, point_y));
    }
    draw->PathStroke(color, 0, thickness);
}

static void draw_login_authenticating()
{
    ImDrawList* draw = ImGui::GetWindowDrawList();
    const ImVec2 origin = ImGui::GetWindowPos();
    const ImVec2 size = ImGui::GetWindowSize();
    draw_login_spinner(origin.x + size.x * 0.5f, origin.y + size.y * 0.55f,
                       30.0f, 4.0f, 0xc8ffffff);
    const char* label = "Authenticating...";
    const float x = origin.x + (size.x - ImGui::CalcTextSize(label).x) * 0.5f;
    draw->AddText(ImVec2(x, origin.y + size.y * 0.76f), 0xb4ffffff, label);
}

static void draw_login_rejection(const char* message)
{
    const float center_x = ImGui::GetIO().DisplaySize.x * 0.5f;
    ImGui::SetNextWindowPos(ImVec2(center_x, 100.0f), ImGuiCond_Always, ImVec2(0.5f, 0.5f));
    const ImGuiWindowFlags flags = ImGuiWindowFlags_NoDecoration |
        ImGuiWindowFlags_AlwaysAutoResize | ImGuiWindowFlags_NoBackground;
    ImGui::Begin("##Toast", nullptr, flags);
    ImDrawList* draw = ImGui::GetWindowDrawList();
    const ImVec2 origin = ImGui::GetWindowPos();
    const ImVec2 size = ImGui::GetWindowSize();
    const ImVec2 end(origin.x + size.x, origin.y + size.y);
    draw->AddRectFilled(origin, end, 0xf0231a14, 10.0f);
    draw->AddRect(origin, end, 0x28ffffff, 10.0f, 0, 1.5f);
    ImGui::TextColored(ImGui::ColorConvertU32ToFloat4(0xff5046f0), "%s", message);
    ImGui::End();
}

bool draw_dexo_login(DexoLoginWindow& state, const char* rejection,
                     DexoOpenKeyPage open_key_page, void* link_context)
{
    bool submit = false;
    const ImVec2 display = ImGui::GetIO().DisplaySize;
    ImGui::SetNextWindowPos(ImVec2(display.x * 0.5f, display.y * 0.5f),
                           ImGuiCond_Always, ImVec2(0.5f, 0.5f));
    ImGui::SetNextWindowSize(ImVec2(430.0f, 330.0f), ImGuiCond_Always);
    const ImGuiWindowFlags flags = ImGuiWindowFlags_NoDecoration |
                                   ImGuiWindowFlags_NoBackground;
    if (ImGui::Begin("##Login", nullptr, flags)) {
        draw_login_panel();
        if (state.waiting) {
            draw_login_authenticating();
            if (key_input_wait_elapsed(ImGui::GetTime(), state.activation_seconds)) {
                state.waiting = false;
                state.request_pending = true;
                submit = true;
            }
        } else if (!state.request_pending) {
            draw_login_key_field(state);
            ImGui::SetCursorPos(ImVec2(35.0f, 142.0f));
            if (draw_login_button("PASTE KEY", 360.0f, 38.0f,
                                  0x12ffffff, 0x28ffffff, 0xdcffffff)) {
                const char* clipboard = ImGui::GetClipboardText();
                copy_pasted_key(state.key, clipboard == nullptr ? "" : clipboard);
            }
            ImGui::SetCursorPos(ImVec2(35.0f, 190.0f));
            if (draw_login_button("ACTIVATE", 360.0f, 46.0f,
                                  0x14ffffff, 0x3cffffff, 0xffffffff) &&
                key_input_can_activate(state.key)) {
                state.activation_seconds = static_cast<float>(ImGui::GetTime());
                state.waiting = true;
            }
            if (open_key_page != nullptr) {
                ImGui::SetCursorPos(ImVec2(35.0f, 250.0f));
                if (draw_login_button("GET KEY", 360.0f, 34.0f,
                                      0x28cc8800, 0x78cc8800, 0xe6ffc878)) {
                    open_key_page(link_context);
                }
            }
        }
    }
    ImGui::End();
    if (ImGui::GetTime() < state.rejection_until || rejection != nullptr) {
        draw_login_rejection(rejection != nullptr && *rejection
            ? rejection : "Your Key Invalid / Expired");
    }
    return submit;
}
