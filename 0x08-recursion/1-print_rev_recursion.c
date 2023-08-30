#include "main.h"

/**
 * _print_rev_recursion - print revesed string .
 * @s: string to print .
 */
void _print_rev_recursion(char *s)
{
	if (!*s)
/* Base case: If the current character is '\0', stop recursion.*/
		return;

	_print_rev_recursion(s + 1);
/*Recursive step: Call the function with the next character in the string.*/
	_putchar(*s);/*Print the current character*/
}
