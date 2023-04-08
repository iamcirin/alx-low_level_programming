#include "lists.h"

/**
 * listint_len - counts the length of a list
 * @h: a pointer param
 * Return: returns 0 or number of elements
 */

size_t listint_len(const listint_t *h)
{
	int len_of_list = 0;

	if (h == NULL)
		return (0);

	while (h->next)
	{
		len_of_list++;
	}
	len_of_list++;
	return (len_of_list);
}
