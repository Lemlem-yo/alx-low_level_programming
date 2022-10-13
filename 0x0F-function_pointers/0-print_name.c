#include "function_pointers.h"
#include <stdio.h>
/**
  * print_name - function that print name
  * @name: a pointer
  * @f: pointer of function
  */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
		f(name);
}
