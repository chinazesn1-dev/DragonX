#ifndef RECOVERED_KENTOS_DEXO_LAUNCH_URL_H
#define RECOVERED_KENTOS_DEXO_LAUNCH_URL_H

#include <jni.h>

/* The caller supplies its activity and a URL, from an attached JNI thread. */
bool dexo_launch_url(JNIEnv* env, jobject activity, const char* url);

#endif
