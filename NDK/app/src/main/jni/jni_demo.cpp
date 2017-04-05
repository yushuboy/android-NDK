//
// Created by Administrator on 2017/4/1.
//

#include "com_axaet_ndk_JniKit.h"

extern "C"
JNIEXPORT jstring JNICALL Java_com_axaet_ndk_JniKit_stringFromJNI(JNIEnv *env, jclass cls) {
   std::string hello = "Hello from C++";
      return env->NewStringUTF(hello.c_str());
}