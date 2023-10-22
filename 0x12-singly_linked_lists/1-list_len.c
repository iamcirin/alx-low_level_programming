#include "lists.h"


/**
 * list_len - a function that counts the number of elements in a list
 * @h: a pointer to the head of the list
 * Return: returns the number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
