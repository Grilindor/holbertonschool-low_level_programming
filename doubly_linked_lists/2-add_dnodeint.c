#include "lists.h"
#include <string.h>

/**
*add_dnodeint - a function that adds a new node at the beginning of a list
*@head: the 1er node of the list
*@n: the integer
*Return: return the new head of the list and the len
**/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/*int i;*/
	dlistint_t *new_node;
	/*alloing memori for new node*/
	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));

	/*succes of malloc?*/
	if (new_node == NULL || head == NULL)
		return (NULL);

	/*for (i = 0; i < n; i++)*/
	new_node->n = n;/*length of integer, n*/

	new_node->next = *head;
	/*Set the previous pointer of the new node to NULL*/
	new_node->prev = NULL;

	/*while it's not null*/
	if (*head != NULL)
		(*head)->prev = new_node;

	/*repeat the processus*/
	(*head) = new_node;
	return (new_node);
}
