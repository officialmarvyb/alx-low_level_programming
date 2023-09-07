#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The number of bytes to be allocated.
 *
 * Return: A pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *m = malloc(b);/*allocate memory using malloc*/

	if (m == NULL)/* check if pointer is null*/
		exit(98);/*Terminatr the process with exit status 98 */

	return (m);
}
