#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: string
 * @src: string
 * @n: number of elements to concatenate
 *
 * Return: pointer to resulting `dest`
 */

char *_strncat(char *dest, char *src, int n)
{
	char *Mydest = dest;

	while (*dest != '\0;)
	{
		dest++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (Mydest);
}
