#ifdef _WIN32
#include <sys/types.h>
#include <winsock.h>
#else
#include <sys/socket.h>
#endif

#include <stdio.h>
#include <string.h>
#include "bytetype.h"
#include "errhandle.h"

__INT32 __cdecl testEcho(const char *const(srvIp),
	const __UINT16 srvPort, const char *const(testMsg)){
#ifdef _WIN32
	SOCKET testSock;

	testSock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
#else

#endif
	return EXIT_SUCCESS;
}