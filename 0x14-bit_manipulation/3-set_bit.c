#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: Pointer to an unsigned long int.
 * @index: Index of the bit.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	i = 1 << index;
	*n = (*n | i);

	return (1);
}
