#include "main.h"
#include <string.h>
/**
 * _strchr - predefined function used for finding the occurrence of a charac * ter in a string. it is present in Cstring header file.
 * @s: string to be scanned
 * @c: character to be searched in str
 * Return: charcter or 0 of the character is not found 
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return ('\0');
}
