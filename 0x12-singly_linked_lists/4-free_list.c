#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: a pointer to the first node
 */

void free_list(list_t *head)
{
	list_t *node;

	while ((node = head) != NULL)
	{
		head = head->next;
		free(node->str);
		free(node);
	}
}
