#include <stdio.h>
#include "function_pointers.h"

/**
  * int_index - searches for an integer
  * @array: pointer for the array to hold the elements
  * @size: number of the array elements
  * @cmp: pointer of function
  * Return: -1, int
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0 && cmp != NULL && array != NULL)
	{
	for (i = 0; i <= size; i++)
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
