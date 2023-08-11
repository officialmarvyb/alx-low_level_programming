#include <stdio.h>

/**
 * main - A C program that prints all digits starting from base 10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 0;
		while (num < '10')
		{
			printf("%d", num);
			num += 1;
		}
	printf("\n");
	return (0);
}
