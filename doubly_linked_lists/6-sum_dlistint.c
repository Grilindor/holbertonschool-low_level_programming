#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
*
*
**/

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *find_node;
	unsigned int i = 0;

	find_node = (struct dlistint_s *) malloc(sizeof(struct dlistint_s));

	if (head == NULL)
		return (0);

	for (i = 0; i != NULL; i++)
	{
		if (head != NULL)
			head = head->next;
		else
			return (0);
	}
	find_node->n = head->n;

	return (find_node);
}
