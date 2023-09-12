#include <stdlib.h>
#include "dog.h"
/**
 * *new_dog - Start of function that creates a new dog.
 * @name: Name
 * @age: Age
 * @owner: Owner
 * Return: Pointer or 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, len1, len2;
	dog_t *newDog;

	if (name == NULL || owner == NULL)
		return (NULL);
	for (len1 = 0; name[len1]; len1++)
		;
	for (len2 = 0; owner[len2]; len2++)
		;

	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);

	newDog->name = malloc(sizeof(newDog->name) * len1 + 1);
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}
	newDog->owner = malloc(sizeof(newDog->owner) * len2 + 1);
	if (newDog->owner == NULL)
	{
		free(newDog);
		return (NULL);
	}
	for (i = 0; i <= len1; i++)
		newDog->name[i] = name[i];
	 newDog->age = age;
	for (i = 0; i <= len1; i++)
		newDog->owner[i] = owner[i];
	return (newDog);
}
