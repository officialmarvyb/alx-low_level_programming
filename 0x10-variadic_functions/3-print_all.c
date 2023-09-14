#include "variadic_functions.h"

/**
 * print_all - Prints anything based on a format string.
 * @format: A format string specifying the types of arguments.
 * @...: The variable number of arguments.
 */

void print_all(const char * const format, ...)
{
	va_list args; /*Declare a variable to hold the arguments*/
	int i = 0;
	char *str, *separator = "";

	va_start(args, format);/* Init va_list with the variable num of args*/
	if (format)

	while (format[i])
	{
		switch (format[i])
		{
			case 'c': /* Character*/
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i': /* Integer*/
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f': /* Float*/
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's': /* String*/
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", separator, str);
				break;
			default: /* Ignore other characters*/
				i++;
				continue;
		}

		separator = ", "; /* Set separator for subsequent values*/
		i++;
	}

	printf("\n"); /* Print a new line at the end*/
	va_end(args); /* Clean up the va_list*/
}
