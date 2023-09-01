#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for an amt of money
 * @argc: argument count
 * @argv: argument vector, array of strings
 * Description: If no number is passed to program, print 0.
 * If one of the numbers contain non-digits, print Error.
 * Return: 1 if error, 0 if function runs properly.
 */

int main(int argc, char *argv[])
{
  	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
	switch (cents)
	{
		case 25:
		case 10:
		case 5:
		case 2:
			coins++;
			cents -= cents;
			break;
		default:
			cents--;
	}
	}

	printf("%d\n", coins);
	return (0);
}
