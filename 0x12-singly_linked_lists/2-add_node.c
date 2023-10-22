#include "lists.h"

/**
 * _len - a function that counts the string length
 * @str: a pointer to a string
 * Return: returns the length of the string
 */
unsigned int _len(const char *str)
{
	unsigned int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * add_node - a function that adds a node at the beginning of the list
 * @head: a pointer to head of the list pointer
 * @str: a pointer to a string
 * Return: return a pointer to s trcut list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp = *head;

	list_t *node = malloc(sizeof(list_t));

	if (node == NULL)
		return (NULL);

	if (str)
	{
		node->str = strdup(str);
		node->len = _len(str);
		node->next = tmp;
		*head = node;
	}

	return (*head);
}



