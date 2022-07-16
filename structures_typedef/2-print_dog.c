#include "dog.h"

/**
 * print_dog - name of funtion
 * struct dog - name of struct
 * @d: pointer to adress
 * Return: always 0
 */

void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);

	if (d == NULL)
		printf("(nil)");

	else if (d->name == NULL)
		printf("Name: (nil)");
}
