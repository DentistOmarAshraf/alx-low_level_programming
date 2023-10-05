#ifndef MAIN_H
#define MAIN_H
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
/**
 * struct err - error identfier
 * @n: int number of error
 * @str: string to print
 */
typedef struct err
{
	int n;
	char *str;
} err_s;
ssize_t read_textfile(const char *, size_t);
int create_file(const char *, char *);
int append_text_to_file(const char *, char *);


#endif
