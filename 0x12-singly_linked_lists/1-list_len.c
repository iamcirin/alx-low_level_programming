#include "lists.h"

/**
 * list_len - a function that calculates the number of elemnts
 * in a list
 * @h: the head of the list
 * Return: returns the number of elements in a list
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		h = h->next;
		i++;
	}


	return (i + 1);
}
