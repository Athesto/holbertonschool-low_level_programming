#include "dog.h"
#include <stdio.h>
#define ISNIL(a) ((a) ? (a) : "(nil)")
/**
 * print_dog - print dog values
 * @d: dog;
 */
void print_dog(struct dog *d)
{
	if (!d)
		return;
	printf("Name: %s\nAge: %f\nOwner: %s\n",
			ISNIL((*d).name), (*d).age, ISNIL((*d).owner));
}
