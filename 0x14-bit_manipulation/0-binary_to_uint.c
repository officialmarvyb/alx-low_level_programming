#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string of '0' and '1' characters.
 *
 * Return: The converted num, or 0 if char is invalid or b is NULL.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int bin = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		bin <<= 1; /* Left-shift the result by 1 and multiply by 2*/

		if (*b == '1')
			bin |= 1; /*Set the least significant bit to 1*/

		b++;
	}

	return (bin);
}
