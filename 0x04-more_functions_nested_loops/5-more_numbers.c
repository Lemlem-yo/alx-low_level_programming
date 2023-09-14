#include "main.h"

/**
 * more_numbers- print numbers 10 times from 1 upto 14.
 *
 */
void more_numbers(void)
{
	int i, j;

	i = 0;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar ((j / 10) + '0');
			}
			_putchar ((j % 10) + '0');
		}
		_putchar ('\n');
	}
}
