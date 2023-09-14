#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  * sum_them_all - sum of all its parameters
  * @n: unsigned int
  * Return: 0
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;

	va_list lep;

	sum = 0;

	if (n == 0)
		return (0);
	va_start(lep, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(lep, int);
	}
	va_end(lep);
	return (sum);
}

