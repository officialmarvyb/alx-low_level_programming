#include "hash_tables.h"

/**
 * hash_djb2 - Func implementing the djb2 algorithm.
 * @str: The string to hash.
 *
 * Return: The calculated hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int m;
	int b;

	m = 5381;
	while ((b = *str++))
		m = ((m << 5) + m) + b;

	return (m);
}
