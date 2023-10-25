#include "lists.h"

/**
 * pop_listint - a function that deleletes the first node in the list
 * @head: a pointer to the first node in the list
 * Return: returns the number in the deleted node
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;
	int m;

	m = tmp->n;
	*head = tmp->next;
	free(tmp);
	return (m);
}

