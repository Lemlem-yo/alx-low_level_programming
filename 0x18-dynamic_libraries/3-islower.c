#include "main.h"
/**
 * _islower(int c)- print only the lower letter passed on it.
 * @c: the character to be evaluated as aplphabetic or not.
 *
 * Return: Exit point.
 */
int _islower(int c)
{
	int counter = 0;

	int n;

	for (n = 97; n <= 122; n++)
	{
		if (c == n)
		{
			counter++;
			break;
		}
	}
	if (counter == 0)
		return (0);
	else
		return (1);
}
