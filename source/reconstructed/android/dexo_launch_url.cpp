#include "dexo_launch_url.h"

bool dexo_launch_url(JNIEnv* env, jobject activity, const char* url)
{
    jclass type = env->GetObjectClass(activity);
    if (type == nullptr) {
        return false;
    }
    jmethodID launch = env->GetMethodID(
        type, "AndroidThunkJava_LaunchURL", "(Ljava/lang/String;)V");
    env->DeleteLocalRef(type);
    if (launch == nullptr) {
        return false;
    }
    jstring value = env->NewStringUTF(url);
    if (value == nullptr) {
        return false;
    }
    env->CallVoidMethod(activity, launch, value);
    env->DeleteLocalRef(value);
    return !env->ExceptionCheck();
}
