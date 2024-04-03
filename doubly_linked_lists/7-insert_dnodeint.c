#include "lists.h"

/**
*insert_dnodeint_at_index - function that inserts a new node
*at a given position
*@h: the head of the list
*@idx: the new node should be added. Index starts at 0
*@n: value of new node
*Return: the place of the new_node
**/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *current = *h;
	unsigned int i = 0;

	if (h == NULL || new_node == NULL)
		return (NULL);

	if (idx == 0)
	{
		new_node = add_dnodeint(h, n);
		return (new_node);
	}

	new_node->n = n;

	for (i = 0; i < idx - 1; i++)
	{
		if (current != NULL)
			current = current->next;
		else
			return (0);
	}

	new_node->next = current->next;

	current->next = new_node;

	new_node->prev = current;

	if (new_node->next != NULL)
		new_node->next->prev = new_node;
	return (new_node);
}
