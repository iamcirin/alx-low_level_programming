#include "lists.h"

/**
 * free_listint2 - a function that frees up the nodes in the list
 * @head: a pointer to the head pointer
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp1, *tmp2;


	if (head != NULL)
	{
		tmp1 = *head;

		while ((tmp2 = tmp1) != NULL)
		{
			tmp1 = tmp1->next;
			free(tmp2);
		}
		*head = NULL;
	}
}
