#pragma once
#ifndef BYTETYPE_H
#define BYTETYPE_H

#ifndef __STDC__
#ifndef __NO_TYPE_ACCURACY
#error This current compiler doesn't assure the size of types. To ignore it, define __NO_TYPE_ACCURACY. 
#endif
#endif

#ifdef USE_STDINT
#include <stdint.h>
#define __INT8 int_least8_t 
#define __UINT8 uint_least8_t
#define __INT16 int_least16_t
#define __UINT16 uint_least16_t
#define __INT32 int_least32_t
#define __UINT32 uint_least32_t
#define __INT64 int_least64_t
#define __UINT64 uint_least64_t
#else
typedef char __INT8;
typedef unsigned char __UINT8;
typedef short __INT16;
typedef unsigned short __UINT16;
#ifdef LONG_32
typedef long __INT32;
typedef unsigned long __UINT32;
#else
typedef int __INT32;
typedef unsigned int __UINT32;
#endif
typedef long long __INT64;
typedef unsigned long long __UINT64;
#endif

#endif