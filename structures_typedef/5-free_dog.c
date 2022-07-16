#include "dog.h"

/**
 * free_dog - name of funtion
 * @d: value of pointer
 * Return: always
 */

void free_dog(dog_t *d)
{
	free(d);
	free(d->name);
	free(d->owner);
}
