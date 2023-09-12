#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Start of function that frees dogs.
 * @d: Dog
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
