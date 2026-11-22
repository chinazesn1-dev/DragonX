#ifndef RECOVERED_KENTOS_DEXO_FEEDBACK_H
#define RECOVERED_KENTOS_DEXO_FEEDBACK_H

#include <string>
#include <vector>

struct DexoFeedbackState {
    char feedback[512] = {};
    char chat_input[256] = {};
    std::vector<std::string> chat;
    std::string status = "No messages yet";
    bool auto_feedback = false;
    bool sending = false;
    int sent = 0;
    int failed = 0;
};

extern DexoFeedbackState g_dexo_feedback;

using DexoFeedbackTransport = bool (*)(const char* text);

/* Optional transport (HTTP/Telegram); without it messages are queued locally. */
void dexo_feedback_set_transport(DexoFeedbackTransport transport);

void dexo_feedback_send(const char* text);
void dexo_chat_push(const char* text);
void dexo_chat_push_message(const char* user, const char* text);

#endif
