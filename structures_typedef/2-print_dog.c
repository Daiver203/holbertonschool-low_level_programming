#include "dog.h"

/**
 * print_dog - name of funtion
 * struct dog - name of struct
 * @d: pointer to adress
 * Return: always 0
 */

void print_dog(struct dog *d)
{
	if (!d)
		return;
	if (!d->name)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	if (!d->owner)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
