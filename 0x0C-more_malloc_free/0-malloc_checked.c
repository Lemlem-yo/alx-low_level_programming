#include "main.h"
#include <stdlib.h>

/**
  * *malloc_checked - allocate memore using malloc
  * @b: unsigned int
  * Return: noting
  * 98 if insufficient memory was available
  */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
