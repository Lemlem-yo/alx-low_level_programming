#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all passed arguments
 * @argc: number of argument passed
 * @argv: array of arguments
 *
 * Return: returns nothing
 */
int main(int argc, char *argv[])
{
	if (argc <= 2)
		printf("%s\n", "Error");
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}
