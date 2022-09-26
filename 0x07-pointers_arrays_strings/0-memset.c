#include "main.h"
#include <string.h>
/**
 * _memset - fills a block of memory with a particular value
 * @s: is a pointer to the block of memory to fill
 * @b: the character value.
 * @n: is the number of bytes to be set to the value
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
