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

	if (size == 0)
	{
		return (NULL);
	}
char *array = (char *)malloc(size * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
