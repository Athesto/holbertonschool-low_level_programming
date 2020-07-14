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
	int i;

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);
	i = 0;

	d->name = malloc(_strlen(name) + 1);
	if (!(d->name))
		return (NULL);
	for (i = 0; name[i]; i++)
		d->name[i] = name[i];
	d->name[i] = '\0';

	d->age = age;

	d->owner = malloc(_strlen(owner) + 1);
	if (!(d->owner))
		return (NULL);
	for (i = 0; owner[i]; i++)
		d->owner[i] = owner[i];
	d->owner[i] = '\0';

	return (d);
}
