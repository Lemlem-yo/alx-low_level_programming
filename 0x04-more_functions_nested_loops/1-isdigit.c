#include "main.h"

/**
 * _isdigit- checks for a digit(0 throuth 9).
 * @c: the character to be determine if it is digit or not.
 * Return: 0 1
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
