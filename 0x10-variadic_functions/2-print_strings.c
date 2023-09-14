#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
  * print_strings - prints strings
  * @separator: string pointer
  * @n: unsigned int
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list str;

	va_start(str, n);

	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			if (str == NULL || separator == NULL)
				printf("(nil)");
			if (i == (n - 1))
				printf("%s", va_arg(str, char *));
			else
				printf("%s%s", va_arg(str, char *), separator);
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			printf("%s", va_arg(str, char *));
		}
	}
	printf("\n");
	va_end(str);
}
