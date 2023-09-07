#include "main.h"
#include <stdlib.h>
#include <stdio.h>

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
	char *concat;
	unsigned int len = n, i;

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
	for (i = 0; s1[i]; i++)
		len++;

	concat = malloc(sizeof(char) * (len + 1));

	if (concat == NULL)
	{
	return (NULL); /*Return NULL on allocation failure.*/
	}
	len = 0;

	for (i = 0; s1[i]; i++)
		concat[len++] = s1[i];
	/*Concatenate the first n bytes of s2 to the concat.*/
	for (i = 0; s2[i] && i < n; i++)
		concat[len++] = s2[i];

	concat[len] = '\0';
	return (concat);
}
