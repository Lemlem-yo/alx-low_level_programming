#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * get_op_func - selects the correct operation asked by the user
  * @s: string points
  * Return: pointer to a function
  */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	while (i < 5)
	{
		if (!strcmp(ops[i].op, s))
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
