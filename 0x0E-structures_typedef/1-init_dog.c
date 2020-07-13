#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initilize dog
 * @d: structure
 * @name: name
 * @age: age
 * @owner: owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		exit(1);
	d->name = name;
	d->age = age;
	d->owner = owner;
}
