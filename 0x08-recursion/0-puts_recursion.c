#include "main.h"

/**
 * _puts_recursion - function like puts();
 * @s: input
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);/*Base Case to stop recursion*/
/*prints the first character of the string*/
		_puts_recursion(s + 1);
/* Recursive step: call the function with the remaining substring.*/
	}
	else
		_putchar('\n');/*prints a new line*/
}
