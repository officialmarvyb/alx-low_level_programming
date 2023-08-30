#include "main.h"

/**
 * factorial - return factorial of a given number.
 * @n: int type number
 * Return: factorial of number
 */

int factorial(int n)
{
/* Check for error condition: if n is negative, return -1.*/
	if (n < 0)
		return (-1);
/*Base case: factorial*/
	else if (n <= 1)
		return (n);
/* Recursive step: n! = n * (n-1)!*/
	else
		return (n * factorial(n - 1));
}
