#include "3-calc.h"

/**
  * op_add - function add the integer
  * @a: integer
  * @b: integer
  * Return: int
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - function subtract the integer
  * @a: integer
  * @b: integer
  * Return: int
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - function multiply two integer
  * @a: integer
  * @b: integer
  * Return: int
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - fuction divide the number
  * @a: integer
  * @b: integer except 0
  * Return: int
  */
int op_div(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);

}

/**
  * op_mod - function return the reminder
  * @a: first integer
  * @b: second integer
  * Return: int
  */
int op_mod(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
