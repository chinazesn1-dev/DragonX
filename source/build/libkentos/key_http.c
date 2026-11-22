#include "key_transport.h"

#include <curl/curl.h>
#include <string.h>

/* The caller initializes libcurl and supplies an empty response buffer. */
int send_key_request(const char *url, const char *game, const char *user_key,
                     const char *serial, struct key_response_body *body,
                     long *http_status)
{
    char request[KEY_REQUEST_CAPACITY];
    *http_status = 0;
    if (strncmp(url, "https://", 8) != 0) {
        return CURLE_UNSUPPORTED_PROTOCOL;
    }
    int length = format_key_request(request, game, user_key, serial);
    if (length < 0 || length >= KEY_REQUEST_CAPACITY) {
        return CURLE_BAD_FUNCTION_ARGUMENT;
    }
    CURL *curl = curl_easy_init();
    if (curl == NULL) {
        return CURLE_FAILED_INIT;
    }
    struct curl_slist *headers = curl_slist_append(
        NULL, "Content-Type: application/x-www-form-urlencoded");
    if (headers == NULL) {
        curl_easy_cleanup(curl);
        return CURLE_OUT_OF_MEMORY;
    }
    CURLcode result = curl_easy_setopt(curl, CURLOPT_URL, url);
    if (result == CURLE_OK) result = curl_easy_setopt(curl, CURLOPT_PROTOCOLS, (long)CURLPROTO_HTTPS);
    if (result == CURLE_OK) result = curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);
    if (result == CURLE_OK) result = curl_easy_setopt(curl, CURLOPT_POSTFIELDS, request);
    if (result == CURLE_OK) result = curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, append_key_response);
    if (result == CURLE_OK) result = curl_easy_setopt(curl, CURLOPT_WRITEDATA, body);
    if (result == CURLE_OK) result = curl_easy_setopt(curl, CURLOPT_TIMEOUT, 30L);
    if (result == CURLE_OK) result = curl_easy_perform(curl);
    if (result == CURLE_OK) result = curl_easy_getinfo(curl, CURLINFO_RESPONSE_CODE, http_status);
    curl_easy_cleanup(curl);
    curl_slist_free_all(headers);
    return result;
}
