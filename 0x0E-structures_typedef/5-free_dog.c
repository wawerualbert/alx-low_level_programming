#include <stdlib.h>
#include "dog.h"

/**
 * free dog - free dog memory
 * @d: dog
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->owner);
	free(d->name);
	free(d);

}
