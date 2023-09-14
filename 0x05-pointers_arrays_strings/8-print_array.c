#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_array- print n elements of an arrays
 * @a: string
 * @n: number
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	putchar('\n');
}

