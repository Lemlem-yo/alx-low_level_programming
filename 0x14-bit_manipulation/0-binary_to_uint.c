#include "main.h"
/**
  * binary_to_uint - function that converts a binary numbers to an unsigned int
  * @b: pointer for the char variable
  * Return: unsigned int, NULL
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int pow = 1;
	int i;
	unsigned int decimal = 0;

	if (b == NULL)
		return (0);
	for (i = strlen(b) - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			decimal += pow;
		pow *= 2;
	}
	return (decimal);
}

