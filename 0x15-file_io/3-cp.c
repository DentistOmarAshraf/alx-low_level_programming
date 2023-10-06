#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * get_err - return error statment
 * @n: int
 * Return: pointer to str
 */

char *get_err(int n)
{
	err_s err[] = {
		{98, "Error: Can't read from file %s\n"},
		{99, "Error: Can't write to %s\n"},
		{100, "Error: Can't close fd %ld\n"},
		{0, NULL}
	};
	int i = 0;

	while (err[i].str != 0)
	{
		if (n == err[i].n)
			return (err[i].str);
		i++;
	}
	return (NULL);
}

/**
 * _cp - function copy from file to file
 * @filefrom: pointer to str (file to copy from)
 * @fileto: pointer to str (file to write to)
 * Return: according to situation
 */
int _cp(char *filefrom, char *fileto)
{
	int fd1, fd2, rdchk, wrchk;
	ssize_t per = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char *buffer, *str;

	fd1 = open(filefrom, O_RDONLY);
	if (fd1 < 0)
		return (98);
	fd2 = open(fileto, O_CREAT | O_WRONLY | O_TRUNC, per);
	if (fd2 < 0)
		return (99);
	buffer = malloc(sizeof(char) * 1024);
	if (!buffer)
		return (99);
	while (rdchk > 0)
	{
		rdchk = read(fd1, buffer, 1024);
		if (rdchk < 0)
		{
			free(buffer);
			return (98);	}
		wrchk = write(fd2, buffer, rdchk);
		if (wrchk < 0)
		{
			free(buffer);
			return (99);	}
	}
	free(buffer);
	rdchk = close(fd1);
	str = get_err(100);
	if (rdchk < 0)
	{
		dprintf(STDERR_FILENO, str, fd1);
		exit(100);	}
	wrchk = close(fd2);
	if (wrchk < 0)
	{
		dprintf(STDERR_FILENO, str, fd2);
		exit(100);	}
	return (1);
}
/**
 * main - main func
 * @ac: number of argment
 * @av: 2d array of argments
 * Return: according to situation
 */
int main(int ac, char **av)
{
	int ret;
	char *str;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	ret = _cp(av[1], av[2]);
	if (ret != 1)
	{
		str = get_err(ret);
		if (ret == 98)
		{
			dprintf(STDERR_FILENO, str, av[1]);
			exit(ret);
		}
		if (ret == 99)
		{
			dprintf(STDERR_FILENO, str, av[2]);
			exit(ret);
		}
	}
	return (0);
}
