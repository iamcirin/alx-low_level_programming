#include "lists.h"

/**
 * print_listint - a function that prints the elements of a list
 * @h: a pointer to the first element un the list
 * Return: return the number of elements in a list
 */
size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (counter);
}
