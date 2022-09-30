#include "main.h"
/**
  * _sqrt - calcualte the sqare number
  * @n: sqared number
  * @i: find sqrt of
  * Return: 0, 1, -1
  */
int _sqrt(int n, int i)
{
	if (n * n == i)
		return (n);
	if (n * n > i)
		return (-1);
	return (_sqrt(n + 1, i));
}
/**
  * _sqrt_recursion - function that returns the natural
  * @n: input number
  *
  * Return: int
  */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (_sqrt(1, n));
}
