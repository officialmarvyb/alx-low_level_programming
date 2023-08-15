#include "main.h"

/**
 * _abs - A function that computes
 * the absolute value of an integer.
 * @c: The character to be checked
 *
 * Return: 1 for lowercase character or 0 for failure
 */
int _abs(int c)

{
	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
