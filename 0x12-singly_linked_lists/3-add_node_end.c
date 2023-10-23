#include "lists.h"

/**
 * _len - a function that counts the length of a string
 * @str: a pointer to string
 * Return: returns the length of string
 */
unsigned int _len(const char *str)
{
	unsigned int i = 0;

	if (str == NULL)
	{
		return (i);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * add_node_end - a function that add a node at the end of a list
 * @head: a pointer to the first node
 * @str: a pointer to a string
 * Return: returns a pointer to the first node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *tmp;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	tmp = *head;
	if (tmp == NULL)
		*head = node;
	else
	{
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}

	tmp->next = node;
	}
	node->next = NULL;
	node->str = strdup(str);
	node->len = str ? _len(str) : 0;

	return (*head);
}

