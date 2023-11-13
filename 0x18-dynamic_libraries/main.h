#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>

int _putchar(char);
int _islower(int);
int _isalpha(int);
int _abs(int);
int _isupper(int);
int _isdigit(int);
int _strlen(char *);
void _puts(char *);
char *_strcpy(char *, char *);
int _atoi(char *);
char *_strcat(char *, char *);
char *_strncat(char *, char *, int);
char *_strncpy(char *, char *, int);
int *_strcmp(char *, char*);
char *_memset(char *, char, size_t);
char *_memcpy(char *, char *, size_t);
char *_strchr(char *, char);
size_t _strspn(char *, char *);
char *_strpbrk(char *, char *);
char *_strstr(char *, char *);

#endif
