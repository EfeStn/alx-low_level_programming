#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - Frees the memory allocated for a dog_t variable.
 * @d: Pointer to the dog_t variable.
 *
 * This function frees the memory allocated for the name, owner, and the
 * dog_t structure itself.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
