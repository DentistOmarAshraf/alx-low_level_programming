#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct dlistint_s - double linked list
 * @n: int
 * @next: pointer to next node
 * @prev: pointer to prev node
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;
size_t print_dlistint(const dlistint_t *);

#endif
