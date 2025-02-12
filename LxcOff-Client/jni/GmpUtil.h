/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class GmpUtil */

#ifndef _Included_GmpUtil
#define _Included_GmpUtil
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     GmpUtil
 * Method:    mpz_init
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_GmpUtil_mpz_1init
  (JNIEnv *, jclass);

/*
 * Class:     GmpUtil
 * Method:    mpz_clear
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_GmpUtil_mpz_1clear
  (JNIEnv *, jclass, jlong);

/*
 * Class:     GmpUtil
 * Method:    mpz_set_si
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_GmpUtil_mpz_1set_1si
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     GmpUtil
 * Method:    mpz_get_si
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_GmpUtil_mpz_1get_1si
  (JNIEnv *, jclass, jlong);

/*
 * Class:     GmpUtil
 * Method:    mpz_cmp
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_GmpUtil_mpz_1cmp
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     GmpUtil
 * Method:    mpz_add
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_GmpUtil_mpz_1add
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     GmpUtil
 * Method:    mpz_sub
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_GmpUtil_mpz_1sub
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     GmpUtil
 * Method:    mpz_mul_si
 * Signature: (JJI)V
 */
JNIEXPORT void JNICALL Java_GmpUtil_mpz_1mul_1si
  (JNIEnv *, jclass, jlong, jlong, jint);

/*
 * Class:     GmpUtil
 * Method:    mpz_addmul_ui
 * Signature: (JJI)V
 */
JNIEXPORT void JNICALL Java_GmpUtil_mpz_1addmul_1ui
  (JNIEnv *x, jclass y, jlong dest, jlong a, jint b);
  
/*
 * Class:     GmpUtil
 * Method:    mpz_submul_ui
 * Signature: (JJI)V
 */
JNIEXPORT void JNICALL Java_GmpUtil_mpz_1submul_1ui
  (JNIEnv *x, jclass y, jlong dest, jlong a, jint b);
  
/*
 * Class:     GmpUtil
 * Method:    mpz_divexact
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_GmpUtil_mpz_1divexact
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     GmpUtil
 * Method:    mpz_tdiv_qr
 * Signature: (JJJJ)V
 */
JNIEXPORT void JNICALL Java_GmpUtil_mpz_1tdiv_1qr
  (JNIEnv *, jclass, jlong, jlong, jlong, jlong);

/*
 * Class:     GmpUtil
 * Method:    mpz_gcd
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_GmpUtil_mpz_1gcd
  (JNIEnv *, jclass, jlong, jlong, jlong);

#ifdef __cplusplus
}
#endif
#endif