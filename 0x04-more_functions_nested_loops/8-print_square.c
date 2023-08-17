#include "main.h"

/**
 * print_square - print n squares according to number of times
 * @size: size of square
 * Description: Can only use _putchar to print. Use '#' to print square.
 *
 * Return: empty
 */
void print_square(int size)
{
	int i, j;

	if (size < 1)
	{
	_putchar('\n');
	}
	else
	{
	for (i = 0; i < size; i++)
	{
	for (j = 0; j < size; j++)
	{
	_putchar(35);
	}
	_putchar('\n');
	}
	}
}
