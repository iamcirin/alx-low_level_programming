#include "lists.h"

/**
 * add_nodeint_end - a function that adds a node at the end of the list
 * @head: a pointer to head pointer
 * @n: a const int
 * Return: returns the head pointer
 */

listint_t *add_nodeint_end(listint_t **head, const int n)

{
	listint_t *node, *tmp;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = node;
	}

	tmp = *head;

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = node;
	node->next = NULL;
	node->n = n;

	return (*head);
}
