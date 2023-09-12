#include "dog.h"
/**
 * init_dog - Start of function that initialize a variable of type struct dog
 * @d: Dog
 * @name: Name
 * @age: Age
 * @owner: Owner
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
