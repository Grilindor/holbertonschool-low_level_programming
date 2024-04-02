#include "lists.h"
#include <stdlib.h>

/**
*get_dnodeint_at_index - function that returns the nth node of a linked list
*@head: 1er in the list
*@index: what to display
*Return: find_node
**/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *find_node;
	unsigned int i = 0;

	find_node = (struct dlistint_s *) malloc(sizeof(struct dlistint_s));

	if (head == NULL || find_node == NULL)
		return (0);

	for (i = 0; i < index; i++)
	{
		if (head != NULL)
			head = head->next;
		else
			return (0);
	}
	find_node->n = head->n;

	return (find_node);

}
