#include "main.h"
/**
 * print_alphabet_x10- print 10 times alphabet
 *
 * Return: exit point
 */
void print_alphabet_x10(void)
{
	int a;

	int j;

	for (a = 0; a < 10; a++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar ('\n');
	}
}
