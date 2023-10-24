#include "lists.h"
/**
 * free_listint - a function that frees up the whole list
 * @head: a pointer to the first node in the list
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	while ((node = head) != NULL)
	{
		head = head->next;
		free(node);
	}
}
