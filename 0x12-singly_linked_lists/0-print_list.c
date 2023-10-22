#include "lists.h"

/**
 * print_list - a function that prints the elements in the list of nodes
 * @h: a pointer to the head of the list
 * Return: return the number of the nodes-elements in the list
 */


size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
			printf("[0] (nil)\n");
		i++;
		h = h->next;
	}

		return (i);
}
