#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * _strlen - finds length of a string
 * @s: the string
 * Return: string length
 */
int _strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to a struct
 * @str: pointer to a const char
 * Return: address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	newNode = malloc(sizeof(newNode));
	if (newNode == NULL)
		return (NULL);
	if (str == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->len = _strlen(str);
	newNode->str = strdup(str);
	newNode->next = *(head);
	*head = newNode;
	return (newNode);
}
