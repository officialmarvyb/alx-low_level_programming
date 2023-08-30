#include "main.h"

/**
 * _puts_recursion - function like puts();
 * @s: input
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)

	if (*s == '\0')
	/* Base Case: If string is enpty or first character is '\0', stop recursion*/
	{
	_putchar('\n'); /*prints a new line*/
	return;
	}
	_putchar(*s); /*prints the first character of the string*/
	_puts_recursion(s + 1);
	/* Recursive step: call the function with the remaining substring.*/
}
