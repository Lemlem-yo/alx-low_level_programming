#include <stdio.h>
/**
  * main - print the name without having to compile it again
  * @argc: the number of an arguments
  * @argv: the array of arguments
  * Return: 0 for sucess
  */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
