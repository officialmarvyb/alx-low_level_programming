#include "main.h"
#include <stdlib.h>

/**
* _strdup - Copy of the string given as a parameter
* @str: The string given.
*
* Return: The pointer to the array.
*/

char *_strdup(char *str)
{
	int i, j;
	char *b;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
	;
	}
	i = i + 1;
	b = malloc(sizeof(char) * i);
	if (b == NULL)
	{
		return (NULL);
	}
	j = 0;
	for (j = 0; j < i; j++)
	{
		b[j] = str[j];
	}
return (b);
}
