#include "dog.h"

/**
 * init_dog - ijdijie
 *
 * @d: jie
 * @name: ijrijr
 *
 * @age: jri
 * @owner: uufr
 *
 * Return: poitner
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
