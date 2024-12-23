/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_snlab_jni_NanoBDD */

#ifndef _Included_org_snlab_jni_NanoBDD
#define _Included_org_snlab_jni_NanoBDD
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_snlab_jni_NanoBDD
 * Method:    cxxConstruct
 * Signature: (III)J
 */
JNIEXPORT jlong JNICALL Java_org_snlab_jni_NanoBDD_cxxConstruct
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     org_snlab_jni_NanoBDD
 * Method:    cxxDestroy
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_snlab_jni_NanoBDD_cxxDestroy
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_snlab_jni_NanoBDD
 * Method:    var
 * Signature: (I)J
 */
JNIEXPORT jlong JNICALL Java_org_snlab_jni_NanoBDD_var
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_snlab_jni_NanoBDD
 * Method:    nvar
 * Signature: (I)J
 */
JNIEXPORT jlong JNICALL Java_org_snlab_jni_NanoBDD_nvar
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_snlab_jni_NanoBDD
 * Method:    getTrue
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_snlab_jni_NanoBDD_getTrue
  (JNIEnv *, jobject);

/*
 * Class:     org_snlab_jni_NanoBDD
 * Method:    getFalse
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_snlab_jni_NanoBDD_getFalse
  (JNIEnv *, jobject);

/*
 * Class:     org_snlab_jni_NanoBDD
 * Method:    not
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_snlab_jni_NanoBDD_not
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_snlab_jni_NanoBDD
 * Method:    and
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_snlab_jni_NanoBDD_and
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_snlab_jni_NanoBDD
 * Method:    or
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_snlab_jni_NanoBDD_or
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_snlab_jni_NanoBDD
 * Method:    diff
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_snlab_jni_NanoBDD_diff
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_snlab_jni_NanoBDD
 * Method:    ref
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_snlab_jni_NanoBDD_ref
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_snlab_jni_NanoBDD
 * Method:    deRef
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_snlab_jni_NanoBDD_deRef
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_snlab_jni_NanoBDD
 * Method:    gc
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_snlab_jni_NanoBDD_gc
  (JNIEnv *, jobject);

/*
 * Class:     org_snlab_jni_NanoBDD
 * Method:    nodeCount
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_snlab_jni_NanoBDD_nodeCount
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
