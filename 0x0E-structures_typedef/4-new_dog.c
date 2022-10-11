#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
  * new_dog - create new dog function
  * @name: first parameter
  * @age: second parameter
  * @owner: third parameter
  * Return: Null, pointer
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	int i, j;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);
	for (i = 0; name[i]; i++)
	{}
	new->name = malloc((i + 1) * sizeof(char));

	for (j = 0; owner[i]; j++)
	{}
	new->owner = malloc((j + 1) * sizeof(char));

	if (new->name == NULL || new->owner == NULL)
	{
		free(new->name);
		free(new->owner);
		free(new);
		return (NULL);
	}
	for (i = 0; name[i]; i++)
	{
		new->name[i] = name[i];

	}
	new->name = '\0';

	for (j = 0; owner[j]; j++)
	{
		new->owner[j] = owner[j];
	}
	new->owner = '\0';
	new->age = age;
	return (new);



}
