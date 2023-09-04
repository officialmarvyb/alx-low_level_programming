#include "main.h"
#include <stdlib.h>

/**
* create_array - Array with a specific char
* @size: Size of the array
* @c: The specific char.
*
* Return: The pointer to the array.
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *b;

	/*Check if size is 0, and return Null if true*/
	if (size == 0)
	{
		return (NULL);
	}

	/*Allocate memory for the array using malloc*/
	b = malloc(size * isizeof(c));
	/*Check if succeed i.e if pointer is NULL or not*/
	if (b == NULL)
	{
		return (NULL);
	}
	/*Initialize the array with the specified character 'c'*/
	for (i = 0; i < size; i++)
	{
		b[i] = c;
	}
	return (b);
}
