#include "dog.h"
#include <stdio.h>
/**
 * init_dog - function that initialize a var of type struct dog
 * @d:ptr to a struct dog
 * @name:ptr to a string
 * @age:float
 * @owner:ptr to a string
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
