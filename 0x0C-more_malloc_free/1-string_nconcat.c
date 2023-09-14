#include "main.h"
#include <stdlib.h>
/**
  * string_nconcat - concatenates two strings
  * @s1: first string
  * @s2: second string
  * @n: index
  * Return: char pointer
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int str1 = 0, str2 = 0, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[str1] != '\0')
		str1++;
	while (s2[str2] != '\0')
		str2++;
	if (n > str2)
		n = str2;
	a = malloc((str1 + n + 1) * sizeof(char));
	if (a == NULL)
		return (NULL);
	for (i = 0; i < str1; i++)
	{
		a[i] = s1[i];
	}
	for (; i < (str1 + n); i++)
	{
		a[i] = s2[i - str1];
	}
	a[i] = '\0';

	return (a);

}
