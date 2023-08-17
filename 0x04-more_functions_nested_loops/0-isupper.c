#include "main.h"

/**
 * _isupper - A function that checks for uppercase characters
 * @c: int type number
 * Return: 1 for uppercase, else 0
 */
int _isupper(int c)
{
	if (c >= 65 && c < 91)
	{
	return (1);
	}
	return (0);
}
