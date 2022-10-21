#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * list_len - function returns number of elems in a linked list_t list
 * @h: pointer to a struct constant
 * Return: returns num of elems
 */
size_t list_len(const list_t *h)
{
	unsigned int count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
