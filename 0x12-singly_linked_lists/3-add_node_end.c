#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: a pointer to pointer to the head of the list
 * @str: a pointer to the string to add
 * Return: returns a pointer to the new node added
 */

list_t *add_node_end(list_t **head, const char *str)
{

	list_t *node, *holder;
	int length = 0;

	if (str == NULL)
		length = 0;

	while (str[length])
		length++;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	node->str = strdup(str);
	node->len = length;
	node->next = NULL;

	holder = *head;


	if (holder == NULL)
		*head = node;
	else
	{
		while (holder->next != NULL)
			holder = holder->next;
		holder->next = node;
	}
	return (*head);
}
