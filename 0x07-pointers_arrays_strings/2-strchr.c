#include "main.h"
#include <stdio.h>
/**
 * _strchr - locates a character in a string .
 * @s: string to check
 * @c: character to found
 * UPDATE V1.0 : Features : Pointers implementation instead of Arrays .
 * Pointer/memory incrementation instead of i .
 * Return: pointer to s or null
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	if (s[i] == c)
		{
		return (s[i]);
		}
	}
	return (NULL);
}
