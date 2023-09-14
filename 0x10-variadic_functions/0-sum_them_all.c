#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of parameters.
 * @...: The variable number of parameters.
 *
 * Return: The sum of all parameters, or 0 if n is 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args; /*Declare a variable to hold the arguments*/
	int sum = 0;
	unsigned int i = 0;

	if (n == 0)
	{
		return (0); /*Return 0 if there are no parameters*/
	}
	/*Initialize the va_list with the variable number of arguments*/
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
	sum = sum + va_arg(args, int);/*Get the next argument & add it to the sum*/
	}

	va_end(args); /*Clean up the va_list*/

	return (sum);
}
