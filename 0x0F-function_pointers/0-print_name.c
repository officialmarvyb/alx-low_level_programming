#include "function_pointers.h"
#include <stdio.h>

/**
  * print_name - this functions prints a name
  * @name: string to print.
  * @f: this a function pointer, that recieves a string.
  * Return: void
  */

void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
