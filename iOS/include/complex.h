/*
 * Copyright (c) 2002 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 * 
 * The contents of this file constitute Original Code as defined in and
 * are subject to the Apple Public Source License Version 1.1 (the
 * "License").  You may not use this file except in compliance with the
 * License.  Please obtain a copy of the License at
 * http://www.apple.com/publicsource and read it before using this file.
 * 
 * This Original Code and all software distributed under the License are
 * distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE OR NON-INFRINGEMENT.  Please see the
 * License for the specific language governing rights and limitations
 * under the License.
 * 
 * @APPLE_LICENSE_HEADER_END@
 */

/*******************************************************************************
*                                                                              *
*     File:  complex.h	                                                       *
*                                                                              *
*     Contains: prototypes and macros germane to C99 complex math.	           *
*                                                                              *
*******************************************************************************/
#ifndef __COMPLEX__
#define __COMPLEX__


#undef complex
#define complex _Complex
#undef _Complex_I
#define _Complex_I (__extension__ 1.0iF) /* constant expression of type const float _Complex */
#undef I
#define I _Complex_I
	
#ifdef __cplusplus
extern "C" {
#endif

extern double complex cacos( double complex );
extern double complex casin( double complex );
extern double complex catan( double complex );

extern double complex ccos( double complex );
extern double complex csin( double complex );
extern double complex ctan( double complex );

extern double complex cacosh( double complex );
extern double complex casinh( double complex );
extern double complex catanh( double complex );

extern double complex ccosh( double complex );
extern double complex csinh( double complex );
extern double complex ctanh( double complex );

extern double complex cexp( double complex );
extern double complex clog( double complex );

extern double cabs( double complex );
extern double complex cpow( double complex, double complex );
extern double complex csqrt( double complex );

extern double carg( double complex );
extern double cimag( double complex );
extern double complex conj( double complex );
extern double complex cproj( double complex );
extern double creal( double complex );

#if defined(__LONG_DOUBLE_128__)
    #error 128-bit long doubles not supported by the arm architecture
#endif

extern long double complex cacosl( long double complex );
extern long double complex casinl( long double complex );
extern long double complex catanl( long double complex );

extern long double complex ccosl( long double complex );
extern long double complex csinl( long double complex );
extern long double complex ctanl( long double complex );

extern long double complex cacoshl( long double complex );
extern long double complex casinhl( long double complex );
extern long double complex catanhl( long double complex );

extern long double complex ccoshl( long double complex );
extern long double complex csinhl( long double complex );
extern long double complex ctanhl( long double complex );

extern long double complex cexpl( long double complex );
extern long double complex clogl( long double complex );

extern long double cabsl( long double complex );
extern long double complex cpowl( long double complex, long double complex );
extern long double complex csqrtl( long double complex );

extern long double cargl( long double complex );
extern long double cimagl( long double complex );
extern long double complex conjl( long double complex );
extern long double complex cprojl( long double complex );
extern long double creall( long double complex );

extern float complex cacosf( float complex );
extern float complex casinf( float complex );
extern float complex catanf( float complex );

extern float complex ccosf( float complex );
extern float complex csinf( float complex );
extern float complex ctanf( float complex );

extern float complex cacoshf( float complex );
extern float complex casinhf( float complex );
extern float complex catanhf( float complex );

extern float complex ccoshf( float complex );
extern float complex csinhf( float complex );
extern float complex ctanhf( float complex );

extern float complex cexpf( float complex );
extern float complex clogf( float complex );

extern float cabsf( float complex );
extern float complex cpowf( float complex, float complex );
extern float complex csqrtf( float complex );

extern float cargf( float complex );
extern float cimagf( float complex );
extern float complex conjf( float complex );
extern float complex cprojf( float complex );
extern float crealf( float complex );

#ifdef __cplusplus
}
#endif

#endif /* __COMPLEX__ */
