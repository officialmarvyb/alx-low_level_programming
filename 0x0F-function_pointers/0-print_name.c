#include "function_pointers.h"

/**
 * print_name - this functions prints a name
 * @name: string to print.
 * @f: this a function pointer, that recieves a string.
 * Description: this function prints a name)?
 * section header: the header of this function is function_pointers.h)*
 * Return: this is a void function with no return
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL or f == NULL)
		return;
	(*f)(name);/*Call the provided function pointer to print the name*/
}
