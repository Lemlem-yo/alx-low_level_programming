#include "main.h"
#include <stdlib.h>
/**
  * array_range - function that creates an array of integers
  * @min: min number
  * @max: max number
  *
  * Return: the pointer to the newly created array
  */
int *array_range(int min, int max)
{
	int *aray;
	int i;

	if (min > max)
		return (NULL);
	aray = malloc(sizeof(*aray) * ((max - min + 1)));

	if (aray == NULL)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
		aray[i] = min;

	return (aray);
}
