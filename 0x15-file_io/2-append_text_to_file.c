#include "main.h"

/**
 * append_text_to_file - append text to file
 * @filename: pointer to str (file name)
 * @text: pointer to txt
 * Return: 1 on success, -1 in fail
 */
int append_text_to_file(const char *filename, char *text)
{
	ssize_t fd, n_write;
	int len;

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (!text)
		if (fd)
			return (1);
	for (len = 0 ; text[len] ; len++)
		;
	n_write = write(fd, text, len);
	if (n_write == -1)
		return (-1);
	close(fd);
	return (1);
}
