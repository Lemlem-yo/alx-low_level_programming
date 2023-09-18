#include "main.h"

/**
 * _isupper- checks for uppercase character.
 * @c: the character to be determine if it is lower or not
 * Return: 0 1
 */
int _isupper(int c)
{
	int upper;
	int count;

	count = 0;

	for (upper = 65; upper <= 90; upper++)
	{
		if (c == upper)
		{
			count++;
			break;
		}
	}
	if (count == 0)
		return (0);
	else
		return (1);
}
