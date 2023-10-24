#include "lists.h"

/**
 * add_nodeint - a function that adds anew node at the beginning of a list
 * @head: a pointer to the head pointer
 * @n: a const int
 * Return: return a pointer to struct - the head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);

	node->next = *head;
	*head = node;
	node->n = n;

	return (*head);
}
