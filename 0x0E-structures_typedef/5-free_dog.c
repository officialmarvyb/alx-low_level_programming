#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees dogs.
 * @d: The dog to be freed.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
	/*Free memory for the name and owner strings*/
	free(d->name);
	free(d->owner);
	/*Free memory for the dog structure itself*/
	free(d);
	}
}
