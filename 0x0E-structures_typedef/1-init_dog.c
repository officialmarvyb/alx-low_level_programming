#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - This initializes a variable of type struct dog.
 * @d: The dog to be initialized.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
/*Check if the pointer d is not NULL (to avoid dereferencing a NULL pointer)*/
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
