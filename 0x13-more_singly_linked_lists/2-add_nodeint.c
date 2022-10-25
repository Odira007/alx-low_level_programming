#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to a pointer to a struct
 * @n: parameter to rep the ints
 * Return: address of the new element, or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = NULL;

	newNode = malloc(sizeof(listint_t));
	if (newNode)
	{
		newNode->n = n;
		newNode->next = *head;
		*head = newNode;
	}
	return (newNode);
}
