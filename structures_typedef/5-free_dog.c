#include "dog.h"

/**
 * free_dog - name of funtion
 * @d: value of pointer
 * Return: always
 */

void free_dog(dog_t *d)
{
	if (!d)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
