#include "main.h"
#include <string.h>
/**
 * _strchr - searches for the first occurence of the character c
 * @s: string to be scanned
 * @c: character to be searched in str
 * Return: string 0
 */
char *_strchr(char *s, char c)
{
	int a;
	int b;

	while (s[a])
	{
		a++;
	}
	for (b = 0; b <= a; b++)
	{
		if (c == s[a])
		{
			s += b;
			return (s);
		}
	}
	return ('\0');
}
