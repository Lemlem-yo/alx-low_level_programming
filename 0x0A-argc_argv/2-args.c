#include <stdio.h>
/**
  * main - print all command line with new line
  * argc: the number of the arguments
  * argv: the array that pass
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
