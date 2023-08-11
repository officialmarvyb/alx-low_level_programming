#include <stdio.h>


/**
 * main - A C program that prints alphabets in lower case and then in uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int lowercase = 'a';
	int uppercase = 'A';
		while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase += 1;
	}
		while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase += 1;
	}
	putchar('\n');
	return (0);
}
