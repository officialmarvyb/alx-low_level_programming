#include "main.h"

/**
 * _memset - A function that fills memory with a constant byte
 *
 * @s: is a pointer to the memory area to be fill with a constant value.
 * @b: is the constant value to fill the memory with.
 * @n: is the number of bytes to fill the constant value.
 *
 * Return: Pointer to memory s
 */

char *_memset(char *s, char b, unsigned int n)
{
	for (unsigned int i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
