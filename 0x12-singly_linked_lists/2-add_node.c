#include "lists.h"

/**
 * add_node - adds new node at the beginning of a list
 * @head: a pointer to pointer to the head of the list
 * @str: string to be duplicated
 * Return: return a pointer to the new head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node_to_add;
	size_t length_of_string = 0;

	if (str == NULL)
		length_of_string = 0;

	while (str[length_of_string])
		length_of_string++;

	node_to_add = malloc(sizeof(list_t));

	if (node_to_add  == NULL)
		return (NULL);

	if (*head == NULL)
		node_to_add->next = NULL;
	else
		node_to_add->next = *head;

	node_to_add->str = strdup(str);
	node_to_add->len = length_of_string;
	*head = node_to_add;
	return (*head);
}
