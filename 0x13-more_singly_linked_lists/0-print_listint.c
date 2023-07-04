#include "lists.h"

/**
 * print_listint - a function that prints the elements of a list
 * @h: a pointer to the head of the list
 Return: returns the numbers of the nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
	       i++;
	}
return (i);
}

