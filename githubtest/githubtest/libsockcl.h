#pragma once
#ifndef LIBSOCKCL_H
#define LIBSOCKCL_H

#define INVALID_ARGUMENTS "INVALID ARGUMENTS!"
#define ERRCODE_INVALID_ARGUMENTS 17
#define DEF_ECHO_PORT 7

#include "bytetype.h"

__INT32 __cdecl testEcho(const char *const(srvIp),
	const __UINT16 srvPort, const char *const(testMsg));

#endif