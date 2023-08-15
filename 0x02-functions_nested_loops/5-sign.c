#include "main.h"

/**
 * print_sign - A function that print the sign of a number
 * @n: The character to be checked
 *
 * Return: 1 for lowercase character or 0 for failure
 */
int print_sign(int n)

{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n == 0)
	{
	_putchar(48);
	return (0);
	}
	else
	{
	_putchar(45);
	return (-1);
	}
}
