#include "lists.h"
#include<stdlib.h>
#include<string.h>

/**
 * add_node_end - a function that adds a node at the end of the list
 * @head: a pointer to pointer to the head
 * @str: a pointer to string
 * Return: returns a pointer to head
 */


list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *temp1;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	temp1 = *head;
	if (temp1 == NULL)
		*head = node;
	else
	{

while (temp1->next != NULL)
temp1 = temp1->next;

		temp1->next = node;
	}


	node->next = NULL;
	node->str = strdup(str);
	node->len = strlen(str);
	return (*head);
}
