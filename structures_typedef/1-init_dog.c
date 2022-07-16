#include "dog.h"

/**
 * init_dog - name of funtion
 * struct dog - name of pointer to struct
 * @d: pointer to address
 * @name: value of struct to pointer
 * @age: value of struct type 'float'
 * @owner: value of struct to pointer
 * Return: value always 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
