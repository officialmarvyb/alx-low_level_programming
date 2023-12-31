#include "variadic_functions.h"

/**
 * print_strings - Prints strings, separated by a specified string,
 * followed by a new line.
 * @separator: The string to be printed between strings (or NULL).
 * @n: The number of strings passed to the function.
 * @...: The variable number of string arguments.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args; /*Declare a variable to hold the arguments*/
	unsigned int i;

	va_start(args, n);/*Initialize va_list with the variable number of arguments*/

	for (i = 0; i < n; i++)
	{
	char *str = va_arg(args, char *);/*Get the next argument as a string*/

	if (str != NULL)
		printf("%s", str); /* Print the string */
	else
		printf("(nil)");/* Print (nil) for NULL strings*/

	if (i != n - 1 && separator != NULL)
		printf("%s", separator);
	/*Print the separator if it's not NULL & not the last string*/
	}

	printf("\n"); /* Print a new line at the end*/

	va_end(args); /* Clean up the va_list*/
}
