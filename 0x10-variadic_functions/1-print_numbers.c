#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers, separated by a specified string,
 * followed by a new line.
 * @separator: The string to be printed between numbers (or NULL).
 * @n: The number of integers passed to the function.
 * @...: The variable number of integer arguments.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args; /*Declare a variable to hold the arguments*/
	unsigned int i;

	va_start(args, n);/*Initialize va_list with the variable num of args*/

	for (i = 0; i < n; i++)
	{
	printf("%d", va_arg(args, int));/*Print the next argument as an int*/

	if (separator != NULL && i != (n - 1))
	{
		printf("%s", separator);
		/*Print the separator if it's not NULL and not the last number*/
	}
	}

	printf("\n"); /*Print a new line at the end*/

	va_end(args); /*Clean up the va_list*/
}
