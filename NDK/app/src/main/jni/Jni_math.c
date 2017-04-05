//
// Created by Administrator on 2017/4/1.
//

#include "com_axaet_ndk_MathKit.h"

JNIEXPORT jint JNICALL Java_com_axaet_ndk_MathKit_square(JNIEnv *env, jclass cls, jint num) {
    return num * num;
}