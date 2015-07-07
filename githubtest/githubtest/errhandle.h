#pragma once
#ifndef ERRHANDLE_H
#define ERRHANDLE_H

#define STD_EXCEPT_HANDLE 0
#define STD_FAIL 1

#include <stdio.h>
#include "bytetype.h"

__INT32 __cdecl uniErrHandle(const char *const(errType),
	const __UINT32 errCode, const __UINT32 argc, 
	const char *const(argv)[], FILE *const(ioHandler),
	const __INT32 actVar);
#ifdef __STDC__
inline int __cdecl defErrHandle(const char *const(errType),
	const __UINT32 errCode, const __UINT32 argc, const char *const(argv)[]){
	return uniErrHandle(errType, errCode, argc, argv, stderr, STD_EXCEPT_HANDLE);
}
#else
#define defErrHandle(errType, errCode, argc, argv) uniErrHandle(errType, errCode, argc, argv, stderr, STD_EXCEPT_HANDLE)
#endif

#endif