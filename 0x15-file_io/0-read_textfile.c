#include "main.h"

/**
 * read_textfile - read a text file and print to stdout
 * @filename: name of file want to read
 * @letters: number lf letters
 * Return: 0 if error or actual number of letter
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, n_read, n_write;
	char *s;

	if (!filename)
		return (0);
	s = malloc(sizeof(char) * letters);
	if (!s)
		exit(98);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(s);
		return (0);
	}
	n_read = read(fd, s, letters);
	if (n_read == -1)
	{
		free(s);
		return (0);
	}
	n_write = write(STDOUT_FILENO, s, n_read);
	close(fd);
	free(s);
	if (n_read == n_write)
		return (n_write);
	return (0);
}
