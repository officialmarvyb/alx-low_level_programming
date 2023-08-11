#include <stdio.h>

/**
 * main - A C program that prints alphabets in lower case except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int lowercase = 'a';
		while (lowercase <= 'z')
	{
		if (lowercase != 'e' && lowercase != 'q')
	{
			putchar(lowercase);
	}
		lowercase += 1;
	}
	 putchar('\n');
	return (0);
}
