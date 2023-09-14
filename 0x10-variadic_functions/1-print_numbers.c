#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
  * print_numbers - prints numbers
  * @separator: string pointer
  * @n: int value
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;

	va_start(arg, n);

	if (separator)
	{
		for (i = 0; i < n; i++)
		{
			if (i == (n - 1))
			{
				printf("%d", va_arg(arg, int));
			}
			else
			{
				printf("%d%s", va_arg(arg, int), separator);
			}
		}
	printf("\n");
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(arg, int));
		}
	}
	va_end(arg);
}
