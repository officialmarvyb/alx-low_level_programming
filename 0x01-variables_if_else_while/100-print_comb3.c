#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i = 0;
			while (i < 100)
	{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
				if (i < 89)
				{
					putchar(',');
					putchar(' ');
				}
				if (i % 10 == 9)
				i{
					i += 9;
				}
				else
				{
					i++;
				}
	}
	putchar('\n');
	return (0);
}
