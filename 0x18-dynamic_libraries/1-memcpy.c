#include "main.h"
#include <string.h>
/**
 * _memcpy - copies n characters form memory area src to memory area dest
 *
 * @dest: pointer to copy
 * @src: source of data to be copied
 * @n: the number of bytes to be copied
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
