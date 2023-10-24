#include "lists.h"


/**
 * listint_len - a function that return the number of elements in a list
 * @h: the pointer to the first node in the list
 * Return: returns the number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
