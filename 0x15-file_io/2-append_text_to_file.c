#include "main.h"
/**
  * append_text_to_file - function that add the text at the end
  * @filename: the name of the file
  * @text_content: the pointer hold the vale of the append text
  * Return: -1 on failure, 1 on success
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, count = 0, m;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	while (text_content[count] != '\0')
		count++;
	m = write(fd, text_content, count);

	close(fd);
	if (m == -1)
		return (-1);
	return (1);
}
