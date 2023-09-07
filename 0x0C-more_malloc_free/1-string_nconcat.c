#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings using at
 * most an inputted number of bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 *
 * Return: If the function fails - NULL.
 * Otherwise - a pointer to the concatenated space in memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	/*If s1 is NULL, treat it as an empty string.*/
	if (s1 == NULL)
	{
		s1 = "";
	}

	/* If s2 is NULL, treat it as an empty string.*/
	if (s2 == NULL)
	{
		s2 = "";
	}

	/*Calculate the length of s2, but not exceeding n.*/
	int n = strlen(s2);

	if (n < len2)
	{
	len2 = n;
	}

	/*Allocate memory for the concatenated string.*/
	char *concat = malloc(strlen(s1) + len2 + 1);

	/*Check if memory allocation succeeded.*/
	if (concat == NULL)
	{
	return (NULL); /*Return NULL on allocation failure.*/
	}

	/*Copy s1 into the concat pointer.*/
	strcpy(concat, s1);

	/*Concatenate the first n bytes of s2 to the concat.*/
	strncat(concat, s2, len2);
	return (concat);
}
