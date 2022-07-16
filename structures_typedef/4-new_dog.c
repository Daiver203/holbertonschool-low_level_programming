#include "dog.h"
/**
 * copy - name of the function
 * @str1: pointer to clear table
 * @str2: pointer to white table
 * Return: str1 with information str2
*/
char *copy(char *str1, char *str2)
{
	int i;

	for (i = 0; str2[i]; i++)
		str1[i] = str2[i];

	str1[i] = '\0';
	return (str1);
}
/**
 * count - name of the function
 * @a: pointer to information
 * Return: number of strings
*/
int count(char *a)
{
	int j;

	for (j = 0; a[j]; j++)
		;

	return (j);
}
/**
 * new_dog - name of the function
 * @name: pointer with name
 * @age: age of the dog
 * @owner: name of the owner
 * Return: always
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog2;

	if (!name || !owner || age < 0)
		return (NULL);
	dog2 = malloc(sizeof(dog_t));
	if (!dog2)
		return (NULL);

	dog2->name = malloc(count(name) + 1);
	if (!dog2->name)
		free(dog2);
		return (NULL);

	dog2->owner = malloc(count(owner) + 1);
	if (!dog2->owner)
		free(dog2->name);
		free(dog2);
		return (NULL);

	dog2->name = copy(dog2->name, name);
	dog2->age = age;
	dog2->owner = copy(dog2->owner, owner);
	return (dog2);
}
