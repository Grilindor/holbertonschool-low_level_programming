#include "lists.h"

/**
* delete_dnodeint_at_index - delete node at the index
*@head:the list
*@index: index of the node to find
*Return: 1 succes, -1 faill
**/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i;
/*Check if the list is empty*/
	if (*head == NULL)
		return (-1);
/*Delete node at index 0*/
	if (index == 0)
	{
		(*head) = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}
/*Traverse the list to find the node at the specified index*/
	for (i = 0; i < index; i++)
	{
		if (current != NULL)
			current = current->next;
		else
			return (-1);
	}
/*Update the pointers of the neighboring nodes*/
	if (current->next != NULL)
		current->next->prev = current->prev;
	if (current->prev != NULL)
		current->prev->next = current->next;
/*Free the memory of the deleted nodeFree the memory of the deleted node*/
	free(current);

	return (1);
}
