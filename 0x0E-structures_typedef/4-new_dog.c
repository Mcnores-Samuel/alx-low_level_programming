#include "dog.h"
#include <stdlib.h>
#include <string.h>

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int x, y;

	if (name != NULL || owner != NULL)
	{
		dog = malloc(sizeof(dog_t));

		if (dog == NULL)
		{
			return (NULL);
		}

		x = strlen(name) + 1;
		y = strlen(owner) + 1;

		dog->name = malloc(sizeof(char) * (x));

		if (dog->name == NULL)
		{
			free(dog);
		}

		dog->owner = malloc(sizeof(char) * (y));

		if (dog == NULL)
		{
			free(dog->name);
			free(dog);
			return (NULL);
		}

		dog->name = strcpy(dog->name, name);
		dog->owner = strcpy(dog->owner, owner);
		dog->age = age;
		
	}
	return (dog);
}
