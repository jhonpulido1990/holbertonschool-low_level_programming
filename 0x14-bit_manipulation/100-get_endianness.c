#include "main.h"
/**
 * @brief 
 * 
 */
int get_endianness(void)
{
	union
	{
		uint32_t i;
		char c[4];
	} e = {0x01000000};

	return (e.c[0]);
}
