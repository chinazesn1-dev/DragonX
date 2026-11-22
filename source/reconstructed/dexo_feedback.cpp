#include "dexo_feedback.h"

#include <cstring>

DexoFeedbackState g_dexo_feedback;

namespace {

DexoFeedbackTransport g_transport = nullptr;
constexpr size_t kMaxChatMessages = 100;

}  // namespace

void dexo_feedback_set_transport(DexoFeedbackTransport transport)
{
    g_transport = transport;
}

void dexo_feedback_send(const char* text)
{
    if (text == nullptr || text[0] == '\0') {
        g_dexo_feedback.status = "Empty message";
        return;
    }
    g_dexo_feedback.sending = true;
    if (g_transport != nullptr && g_transport(text)) {
        ++g_dexo_feedback.sent;
        g_dexo_feedback.status = "Sent";
    } else {
        ++g_dexo_feedback.failed;
        g_dexo_feedback.status = "Queued (transport not configured)";
    }
    g_dexo_feedback.sending = false;
}

void dexo_chat_push(const char* text)
{
    if (text == nullptr || text[0] == '\0') {
        return;
    }
    g_dexo_feedback.chat.emplace_back(text);
    if (g_dexo_feedback.chat.size() > kMaxChatMessages) {
        g_dexo_feedback.chat.erase(g_dexo_feedback.chat.begin());
    }
}

void dexo_chat_push_message(const char* user, const char* text)
{
    std::string line = user != nullptr ? user : "";
    line += ": ";
    line += text != nullptr ? text : "";
    dexo_chat_push(line.c_str());
}
