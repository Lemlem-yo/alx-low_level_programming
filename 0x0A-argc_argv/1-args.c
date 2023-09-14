#include <stdio.h>
/**
  * main - function that prints the number of arguments passed
  * @argc: argument count
  * @argv: charater array of passed arguments
  * Return: 0
  */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
