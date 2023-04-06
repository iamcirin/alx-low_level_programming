#include "lists.h"


/**
 * list_len - counts the number of elements in a linked list
 * @h: pointer to the head of the list
 * Return: return the number of elements
 */



size_t list_len(const list_t *h)
{
	size_t number = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		h = h->next;
		number++;
	}
	return (number);
}
