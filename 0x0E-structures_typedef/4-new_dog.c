#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: new dog pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(*d));
	if (!d)
		return (NULL);
	d->name = malloc(_strlen(name) + 1);
	if (!(d->name))
	{
		free(d);
		return (NULL);
	}
	_strcpy(d->name, name);
	d->age = age;
	d->owner = malloc(_strlen(owner) + 1);
	if (!(d->owner))
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	_strcpy(d->owner, owner);
	return (d);
}
