#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: The string.
 * Return: length
 */
int _strlen_recursion(char *s)
{

	if (*s == 0)
/* Base case: If the current character is '\0', return 0.*/
	{
		return (0);
	}

/* Recursive step: Call the function with the next character in the string.*/
/*Increment the result by 1 to get for the current character.*/
	return (1 + _strlen_recursion(s + 1));
}
