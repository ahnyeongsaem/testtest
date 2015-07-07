//-----------------------------
//
//DEFINE YOUR MACROS UPTO THE ENVIRONMENT
//
// __NO_TYPE_ACCURACY : Ignore the byte-size of any type in "bytetype.h".
#define __NO_TYPE_ACCURACY
// _WIN32 : State the using of Win32 API and other Windows funcitonalities. 
#define _WIN32
#define _CRT_SECURE_NO_WARNINGS // Ignore Visual Studio CRT Warnings.
//-----------------------------

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bytetype.h"
#include "libsockcl.h"
#include "errhandle.h"

#ifdef _WIN32
#include <winsock.h>
#else

#endif

__INT32 __cdecl main(const __UINT32 argc,
	const char *const(argv)[]){
	char *srvIp, *echoStr;
	__UINT32 srvPort;
	
	if (argc != 2 && argc != 3)
		return defErrHandle(INVALID_ARGUMENTS, 
		ERRCODE_INVALID_ARGUMENTS, argc, argv);
	srvIp = (char*)malloc(strlen(argv[0]) + 1);
	echoStr = (char*)malloc(strlen(argv[1]) + 1);
	strcpy(srvIp, argv[0]);
	strcpy(echoStr, argv[1]);
	srvPort = argc == 3 ? atoi(argv[2]) : DEF_ECHO_PORT;

	if (testEcho(srvIp, srvPort, echoStr))
		fputs("Succeeded!", stdout);
	else
		fputs("Failed!", stderr);

	return EXIT_SUCCESS;
}