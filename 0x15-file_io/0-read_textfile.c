#include "main.h"
/**
  * read_textfile - function that reads a text file and
  * prints it to the POSIX
  * @filename: the name of the file
  * @letters: the number of letters to print
  * Return: the number of characters that can be written
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t n, m;
	int fd;
	char *lt;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	lt = malloc(letters);

	if (lt == NULL)
	{
		close(fd);
		return (0);
	}
	n = read(fd, lt, letters);
	m = write(STDOUT_FILENO, lt, n);
	if (m != n)
	{
		close(fd);
		free(lt);

	}
	close(fd);
	free(lt);
	return (m);
}
