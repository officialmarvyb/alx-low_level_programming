#include "main.h"

/**
 * print_alphabet_x10 - A C program that prints  prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)

{
	char c;
	int i = 0;

	while (i < 10)
	{
	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
	i++;
	}
}
