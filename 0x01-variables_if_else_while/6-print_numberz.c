#include <stdio.h>

/**
 * main - A C program that prints  prints all single digit numbers of base 10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 0;
		for (num = 0; num < 10; num++)
			putchar((num % 10) + '0');
		putchar("\n");
		return (0);
}
