#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 *
 * @d: The struct dog to be printed.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return; /*If d is NULL, print nothing and return*/
	}
	printf("Name: ");
	if (d->name == NULL)
	{
		printf("(nil)\n"); /*If name is NULL, print (nil).*/
	}
	else
	{
		printf("%s\n", d->name);
	}
	printf("Age: ");
	if (d->age < 0)
	{
		printf("(nil)\n");/*If age is NULL, print (nil).*/
	}
	else
	{
		printf("%f\n", d->age);
	}
	if (d->owner == NULL)
		printf("Owner: (nil)\n");/*If owner is NULL, print (nil).*/
	else
		printf("Owner: %s\n", d->owner);

}
