#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the first node in the list
 * Return: returns the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t  number = 1;

	if (h == NULL)
		return (0);

	while (*h.next != NULL)
	{
		if (h->str == NULL)
			printf("[0] %S\n", "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;

		number++;
	}

	printf("[%d] %s\n", h->len, h->str);
	return (number);
}
