#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: the structure to initialize.
 * @name: pointer to the name struct element.
 * @age: age of the dog
 * @owner: pointer to the owner struct element.
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
	else
		return;
}
