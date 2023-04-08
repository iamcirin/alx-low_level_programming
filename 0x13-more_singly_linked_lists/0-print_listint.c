#include "lists.h"

/**
 * print_listint - prints integers in a list
 * @h: pointer to the first node in the list
 * Return: returns the number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	int number = 1;

	if (h == NULL)
		return (0);
	while (h->next)
	{
		printf("%d\n", h->n);
		h = h->next;
		number++;
	}
	printf("%d\n", h->n);
	return (number);
}
