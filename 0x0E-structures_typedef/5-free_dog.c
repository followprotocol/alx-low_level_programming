#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - function that frees dog.
 * @d: pointer to variable.
 * Return: nothing
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
