#include <stdio.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: first node
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *tmp = NULL;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
