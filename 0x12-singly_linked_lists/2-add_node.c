#include "lists.h"
#include <string.h>
#include<stdlib.h>

/**
 * add_node - a function that adds a node to the beginning of the list
 * @head: a pointer to a pointer to the head of the list
 * @str: a pointer to a string
 * Return: returns a pointer to the head of the list
 */



list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	node->next = *head;
	if (*head == NULL)
		node->next = NULL;
	node->str = strdup(str);
	node->len = strlen(str);

	*head = node;

	return (*head);
}

