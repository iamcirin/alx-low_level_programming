#include "lists.h"

/**
 * free_list - a funciton that frees up a list of nodes
 * @head: the first node in the list
 * Return: returns nothing void
 */

void free_list(list_t *head)
{
	list_t *tmp;

	tmp = head;
	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
