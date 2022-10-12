#include "function_pointers.h"
#include <stddef.h>
/**
  * print_name - function that print name
  * @name: a pointer
  * @f: pointer of function
  */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		(*f)(name);
}
