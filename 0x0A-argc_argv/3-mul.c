#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply 2 numbers passed to main, or Error
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 if error, 0 if function runs correctly
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{

		int num 1 = atoi(argv[1])
		int num 2 = atoi(argv[2])

		printf("%d\n", num 1 * num 2);
		return (0);
	}
	else
	{
	printf("Error\n");
	return (1);
	}
}
