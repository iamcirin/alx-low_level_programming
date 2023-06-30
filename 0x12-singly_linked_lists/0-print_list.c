#include "lists.h"

/**
 * print_list - a function that prints all the elemnts of a list_t.
 * @h: a pointer to head;
 * Return: returns the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count;

	count = 1;
	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		if (h->str == NULL)
			printf("[0] ""(nil)""\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}

	printf("[%d] %s\n", h->len, h->str);

	return (count);
}

