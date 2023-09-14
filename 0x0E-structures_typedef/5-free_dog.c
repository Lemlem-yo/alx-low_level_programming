#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
  * free_dog - free the function to hold memory space
  * @d: pointer to dog
  */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
