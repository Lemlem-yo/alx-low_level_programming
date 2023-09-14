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
	while (*s != '\0')
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return ('\0');
}
