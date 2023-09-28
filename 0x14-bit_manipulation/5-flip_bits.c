#include "main.h"

/**
 * flip_bits - Counts the number of bits to flip to get from n to m.
 * @n: First num.
 * @m: Second num.
 *
 * Return: Number of bits to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int c = 0;
	unsigned long int i = n ^ m;

	while (i > 0)
	{
		c = c + (i & 1);
		i >>= 1;
	}

	return (c);
}
