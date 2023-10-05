#include "main.h"

/**
 * create_file - function to create file wit system call
 * @filename: pointer to str(name of file to create)
 * @text_content: porinter to str(txt to be written in the file)
 * Return: 1 on success -1 on fail
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t fd, n_write;
	int len;

	if (!filename)
		return (-1);
	if (!text_content)
		text_content = "";
	for (len = 0 ; text_content[len] ; len++)
		;
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	n_write = write(fd, text_content, len + 1);
	if (n_write == -1)
		return (-1);
	close(fd);
	return (1);
}
