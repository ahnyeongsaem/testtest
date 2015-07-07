#include <stdio.h>
#include <stdlib.h>
#include "bytetype.h"
#include "errhandle.h"

__INT32 __cdecl uniErrHandle(const char *const(errType),
	const __UINT32 errCode, const __UINT32 argc,
	const char *const(argv)[],  FILE *const(ioHandler),
	const int actVar){
	__UINT32 u;
	
	switch (actVar){
		case STD_EXCEPT_HANDLE:
		default:
			for (u = 0; u < argc; u++)
				fprintf(ioHandler, "%s! (%u): %s",
				errType,errCode,argv[u]);
			return STD_FAIL;
	}
}