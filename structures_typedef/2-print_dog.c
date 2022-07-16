#include "dog.h"

/**
 * print_dog - name of funtion
 * struct dog - name of struct
 * @d: pointer to adress
 * Return: always 0
 */

void print_dog(struct dog *d)
{
	printf("Name: %s", my_dog.name);
	printf("Age: %f", my_dog.age);
	printf("Owner: %s", my_dog.owner);

	if (d == NULL)
		printf("(nil)");

	else if (d->name == NULL)
		printf("Name: (nil)");
}
