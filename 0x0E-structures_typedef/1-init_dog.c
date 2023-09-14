#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
  * init_dog - function return value of struct
  * @d: hold the adress of struct dog
  * @name: parameter
  * @age: parameter2
  * @owner: parameter3
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
