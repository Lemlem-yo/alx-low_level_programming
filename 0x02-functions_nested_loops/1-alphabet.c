#include "main.h"
/**
 * print_alphabet- the prototype in main.h file
 *
 * Return: Exit point
 */
void print_alphabet(void)
{
	int n = 97;

	while (n <= 122)
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
