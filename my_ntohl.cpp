#include "my_ntohl.h"

unsigned int my_ntohl(unsigned int NUM)
{
	#if BYTE_ORDER == BIG_ENDIAN
		printf("big\n");
	#else
		printf("little\n");

	return NUM;
}