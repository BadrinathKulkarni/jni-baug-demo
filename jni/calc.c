/*
 * This 'c' source files implements native methods.
 *
 * Name : calc.c
 * Date : 24 MAR 2011
 */
#include <jni.h>

jint Java_com_baug_demo_BaugDemo_add(JNIEnv* env, jobject this, jint x, jint y) {
	return x + y;
}

jint Java_com_baug_demo_BaugDemo_sub(JNIEnv* env, jobject this, jint x, jint y) {
	return x - y;
}

jint Java_com_baug_demo_BaugDemo_mul(JNIEnv* env, jobject this, jint x, jint y) {
	return x * y;
}

jint Java_com_baug_demo_BaugDemo_div(JNIEnv* env, jobject this, jint x, jint y) {
	return x / y;
}

