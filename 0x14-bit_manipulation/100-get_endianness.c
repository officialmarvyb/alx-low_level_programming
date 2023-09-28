#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if big endian or 1 if little endian.
 */

int get_endianness(void)
{
	unsigned int i = 1;
	/*char *p = (char *)&i;*/

	return (*((char *)&i));
}
