#include <stdio.h>

/**
 * main - A C program that prints all single digit numbers of base 10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int lowercase = 'a';
		while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase += 1;
	}
	putchar('\n');
	return (0);
}
