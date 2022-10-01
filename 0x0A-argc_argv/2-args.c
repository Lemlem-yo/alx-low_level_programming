#include <stdio.h>
/**
  * main - print all command line with new line
  * @argc: number of argument passed
  * @argv: array of arguments
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
