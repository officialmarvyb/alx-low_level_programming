#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: Pointer to an unsigned long int.
 * @index: Index of the bit.
 *
 * Return: 1 if it worked, or -1 for error.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	i = 1 << index;
	if (*n & i)
		*n ^= i;

	return (1);


}
