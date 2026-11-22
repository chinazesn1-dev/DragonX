cmake_minimum_required(VERSION 3.22)
project(dexo_key_transport LANGUAGES C CXX)

add_library(dexo_key_transport STATIC key_input.c key_request.c key_response.c key_http.c)
target_compile_features(dexo_key_transport PRIVATE c_std_11)
target_include_directories(dexo_key_transport PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")
target_include_directories(dexo_key_transport PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/../vendor/curl-7.51.0/include")
set_target_properties(dexo_key_transport PROPERTIES POSITION_INDEPENDENT_CODE ON C_VISIBILITY_PRESET hidden)

add_library(dexo_reply STATIC dexo_reply.cpp)
target_compile_features(dexo_reply PUBLIC cxx_std_11)
target_include_directories(dexo_reply PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")
target_include_directories(dexo_reply PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/../vendor/nlohmann-json-3.9.1")
set_target_properties(dexo_reply PROPERTIES POSITION_INDEPENDENT_CODE ON CXX_VISIBILITY_PRESET hidden)
if(ANDROID AND ANDROID_ABI STREQUAL "arm64-v8a" AND CMAKE_CXX_COMPILER_ID STREQUAL "Clang"
   AND CMAKE_CXX_COMPILER_VERSION VERSION_EQUAL "7.0")
    target_sources(dexo_reply PRIVATE dexo_json_serializer.cpp)
    target_compile_definitions(dexo_reply PRIVATE DEXO_SEPARATE_JSON_SERIALIZER)
    # Match the serializer's register-copy order independently of its wrapper.
    set_source_files_properties(dexo_json_serializer.cpp PROPERTIES
        COMPILE_OPTIONS "-mllvm;-disable-postra-machine-sink")
endif()

add_library(dexo_exchange STATIC dexo_exchange.cpp)
target_compile_features(dexo_exchange PUBLIC cxx_std_11)
target_include_directories(dexo_exchange PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")
target_link_libraries(dexo_exchange PUBLIC dexo_key_transport dexo_reply)
set_target_properties(dexo_exchange PROPERTIES POSITION_INDEPENDENT_CODE ON CXX_VISIBILITY_PRESET hidden)

set(imgui_source_dir "${CMAKE_CURRENT_SOURCE_DIR}/../vendor/imgui-ddddabdcc")
if(ANDROID)
    enable_language(ASM)
    set(dexo_default_font "${CMAKE_CURRENT_SOURCE_DIR}/assets/DroidSans-Regular.base85")
    set(imgui_font_source "${CMAKE_CURRENT_BINARY_DIR}/dexo_default_font.S")
    configure_file(android/dexo_default_font.S.in "${imgui_font_source}" @ONLY)
    set_source_files_properties("${imgui_font_source}" PROPERTIES OBJECT_DEPENDS "${dexo_default_font}")
    set_source_files_properties("${imgui_source_dir}/imgui_draw.cpp" PROPERTIES COMPILE_OPTIONS "-fdata-sections")
endif()
add_library(dexo_imgui STATIC
    "${imgui_source_dir}/imgui.cpp"
    "${imgui_source_dir}/imgui_draw.cpp"
    ${imgui_font_source}
    "${imgui_source_dir}/imgui_tables.cpp"
    "${imgui_source_dir}/imgui_widgets.cpp"
)
target_compile_features(dexo_imgui PUBLIC cxx_std_11)
target_include_directories(dexo_imgui PUBLIC "${imgui_source_dir}")
set_target_properties(dexo_imgui PROPERTIES POSITION_INDEPENDENT_CODE ON CXX_VISIBILITY_PRESET hidden)

add_library(dexo_login_window STATIC dexo_login_window.cpp)
target_compile_features(dexo_login_window PUBLIC cxx_std_11)
target_include_directories(dexo_login_window PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")
target_link_libraries(dexo_login_window PUBLIC dexo_imgui dexo_key_transport)
set_target_properties(dexo_login_window PROPERTIES POSITION_INDEPENDENT_CODE ON CXX_VISIBILITY_PRESET hidden)

if(ANDROID)
    target_compile_definitions(dexo_imgui PRIVATE DEXO_EMBEDDED_DEFAULT_FONT)

    set(dexo_jost "${CMAKE_CURRENT_SOURCE_DIR}/assets/Jost-Regular.ttf")
    set(dexo_icons "${CMAKE_CURRENT_SOURCE_DIR}/assets/FontAwesome-4.7.0.stb")
    set(dexo_png "${CMAKE_CURRENT_SOURCE_DIR}/assets/image-649010.png")
    set(dexo_asset_files "${dexo_png}" "${dexo_jost}" "${dexo_icons}")
    set_property(DIRECTORY APPEND PROPERTY CMAKE_CONFIGURE_DEPENDS ${dexo_asset_files})
    file(SIZE "${dexo_jost}" dexo_jost_size)
    file(SIZE "${dexo_icons}" dexo_icons_size)
    file(SIZE "${dexo_png}" dexo_png_size)
    configure_file(android/dexo_assets.S.in dexo_assets.S @ONLY)
    set_source_files_properties("${CMAKE_CURRENT_BINARY_DIR}/dexo_assets.S"
        PROPERTIES OBJECT_DEPENDS "${dexo_asset_files}")
    add_library(dexo_assets STATIC "${CMAKE_CURRENT_BINARY_DIR}/dexo_assets.S")
    target_link_libraries(dexo_login_window PRIVATE dexo_assets)
    target_compile_definitions(dexo_login_window PRIVATE
        DEXO_JOST_SIZE=${dexo_jost_size} DEXO_ICONS_SIZE=${dexo_icons_size})

    set(dexo_decoder_source "${CMAKE_CURRENT_SOURCE_DIR}/../vendor/stb-imv-7bf43912/stb_image.c")
    set_source_files_properties("${dexo_decoder_source}" PROPERTIES
        COMPILE_OPTIONS "-fdata-sections;-fno-common")
    add_library(dexo_texture STATIC android/dexo_texture.cpp "${dexo_decoder_source}")
    target_compile_definitions(dexo_texture PRIVATE DEXO_PNG_SIZE=${dexo_png_size})
    target_compile_features(dexo_texture PUBLIC cxx_std_11 PRIVATE c_std_99)
    target_include_directories(dexo_texture PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/android")
    target_link_libraries(dexo_texture PUBLIC GLESv3 PRIVATE dexo_assets m)
    set_target_properties(dexo_texture PROPERTIES POSITION_INDEPENDENT_CODE ON
        C_VISIBILITY_PRESET hidden CXX_VISIBILITY_PRESET hidden)

    add_library(dexo_imgui_android STATIC "${imgui_source_dir}/backends/imgui_impl_android.cpp")
    target_compile_features(dexo_imgui_android PUBLIC cxx_std_11)
    target_include_directories(dexo_imgui_android PUBLIC "${imgui_source_dir}/backends")
    target_link_libraries(dexo_imgui_android PUBLIC dexo_imgui android)
    set_target_properties(dexo_imgui_android PROPERTIES POSITION_INDEPENDENT_CODE ON CXX_VISIBILITY_PRESET hidden)

    add_library(dexo_imgui_gles3 STATIC "${imgui_source_dir}/backends/imgui_impl_opengl3.cpp")
    target_compile_features(dexo_imgui_gles3 PUBLIC cxx_std_11)
    target_include_directories(dexo_imgui_gles3 PUBLIC "${imgui_source_dir}/backends")
    target_compile_definitions(dexo_imgui_gles3 PRIVATE IMGUI_IMPL_OPENGL_ES3)
    target_link_libraries(dexo_imgui_gles3 PUBLIC dexo_imgui GLESv3)
    set_target_properties(dexo_imgui_gles3 PROPERTIES POSITION_INDEPENDENT_CODE ON CXX_VISIBILITY_PRESET hidden)

    add_library(dexo_login_backend STATIC android/dexo_login_backend.cpp)
    target_compile_features(dexo_login_backend PUBLIC cxx_std_11)
    target_include_directories(dexo_login_backend PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/android")
    target_link_libraries(dexo_login_backend PUBLIC dexo_login_window dexo_imgui_android dexo_imgui_gles3 EGL)
    set_target_properties(dexo_login_backend PROPERTIES POSITION_INDEPENDENT_CODE ON CXX_VISIBILITY_PRESET hidden)

    add_library(dexo_android_link STATIC android/dexo_launch_url.cpp)
    target_compile_features(dexo_android_link PUBLIC cxx_std_11)
    target_include_directories(dexo_android_link PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/android")
    set_target_properties(dexo_android_link PROPERTIES POSITION_INDEPENDENT_CODE ON CXX_VISIBILITY_PRESET hidden)
endif()

add_library(dexo_app STATIC dexo_app.cpp)
target_compile_features(dexo_app PUBLIC cxx_std_11)
target_include_directories(dexo_app PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")
target_include_directories(dexo_app PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/../vendor/nlohmann-json-3.9.1")
set_target_properties(dexo_app PROPERTIES POSITION_INDEPENDENT_CODE ON CXX_VISIBILITY_PRESET hidden)

add_library(dexo_menu STATIC dexo_menu.cpp)
target_compile_features(dexo_menu PUBLIC cxx_std_11)
target_include_directories(dexo_menu PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")
target_link_libraries(dexo_menu PUBLIC dexo_imgui dexo_app)
set_target_properties(dexo_menu PROPERTIES POSITION_INDEPENDENT_CODE ON CXX_VISIBILITY_PRESET hidden)

add_library(dexo_hooks STATIC dexo_hooks.c)
target_compile_features(dexo_hooks PUBLIC c_std_11)
target_include_directories(dexo_hooks PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")
set_target_properties(dexo_hooks PROPERTIES POSITION_INDEPENDENT_CODE ON C_VISIBILITY_PRESET hidden)

add_library(dexo_gameplay STATIC dexo_gameplay.cpp)
target_compile_features(dexo_gameplay PUBLIC cxx_std_11)
target_include_directories(dexo_gameplay PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")
target_link_libraries(dexo_gameplay PUBLIC dexo_app)
set_target_properties(dexo_gameplay PROPERTIES POSITION_INDEPENDENT_CODE ON CXX_VISIBILITY_PRESET hidden)

add_library(dexo_lua STATIC dexo_lua.cpp)
target_compile_features(dexo_lua PUBLIC cxx_std_11)
target_include_directories(dexo_lua PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")
target_link_libraries(dexo_lua PUBLIC dexo_app)
set_target_properties(dexo_lua PROPERTIES POSITION_INDEPENDENT_CODE ON CXX_VISIBILITY_PRESET hidden)

add_library(dexo_inline_hook STATIC dexo_inline_hook.c)
target_compile_features(dexo_inline_hook PUBLIC c_std_11)
target_include_directories(dexo_inline_hook PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")
set_target_properties(dexo_inline_hook PROPERTIES POSITION_INDEPENDENT_CODE ON C_VISIBILITY_PRESET hidden)

add_library(dexo_lua_capture STATIC dexo_lua_capture.cpp)
target_compile_features(dexo_lua_capture PUBLIC cxx_std_11)
target_include_directories(dexo_lua_capture PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")
target_link_libraries(dexo_lua_capture PUBLIC dexo_lua dexo_inline_hook)
set_target_properties(dexo_lua_capture PROPERTIES POSITION_INDEPENDENT_CODE ON CXX_VISIBILITY_PRESET hidden)

add_library(dexo_skin_config STATIC dexo_skin_config.cpp)
target_compile_features(dexo_skin_config PUBLIC cxx_std_11)
target_include_directories(dexo_skin_config PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")
target_link_libraries(dexo_skin_config PUBLIC dexo_app)
set_target_properties(dexo_skin_config PROPERTIES POSITION_INDEPENDENT_CODE ON CXX_VISIBILITY_PRESET hidden)

add_library(dexo_input_hook STATIC dexo_input_hook.cpp)
target_compile_features(dexo_input_hook PUBLIC cxx_std_11)
target_include_directories(dexo_input_hook PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")
target_link_libraries(dexo_input_hook PUBLIC dexo_inline_hook dexo_imgui_android)
set_target_properties(dexo_input_hook PROPERTIES POSITION_INDEPENDENT_CODE ON CXX_VISIBILITY_PRESET hidden)

add_library(dexo_ue4 STATIC dexo_ue4.cpp)
target_compile_features(dexo_ue4 PUBLIC cxx_std_11)
target_include_directories(dexo_ue4 PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")
target_link_libraries(dexo_ue4 PUBLIC dexo_gameplay dexo_app)
set_target_properties(dexo_ue4 PROPERTIES POSITION_INDEPENDENT_CODE ON CXX_VISIBILITY_PRESET hidden)

add_library(dexo_esp_render STATIC dexo_esp_render.cpp)
target_compile_features(dexo_esp_render PUBLIC cxx_std_11)
target_include_directories(dexo_esp_render PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")
target_link_libraries(dexo_esp_render PUBLIC dexo_gameplay dexo_imgui)
set_target_properties(dexo_esp_render PROPERTIES POSITION_INDEPENDENT_CODE ON CXX_VISIBILITY_PRESET hidden)

if(ANDROID)
    add_library(dexo_kentos SHARED dexo_entry.cpp)
    target_compile_features(dexo_kentos PRIVATE cxx_std_11)
    target_include_directories(dexo_kentos PRIVATE
        "${CMAKE_CURRENT_SOURCE_DIR}"
        "${CMAKE_CURRENT_SOURCE_DIR}/android"
        "${imgui_source_dir}"
        "${imgui_source_dir}/backends")
    target_link_libraries(dexo_kentos PRIVATE
        dexo_menu dexo_app dexo_hooks dexo_gameplay dexo_lua
        dexo_lua_capture dexo_ue4 dexo_esp_render dexo_input_hook dexo_skin_config
        dexo_imgui dexo_imgui_android dexo_imgui_gles3
        dexo_texture dexo_assets dexo_login_window
        android EGL GLESv3 log m dl)
    set_target_properties(dexo_kentos PROPERTIES
        POSITION_INDEPENDENT_CODE ON
        C_VISIBILITY_PRESET hidden
        CXX_VISIBILITY_PRESET hidden)
endif()
