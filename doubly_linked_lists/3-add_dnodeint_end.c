#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
* add_dnodeint_end - a function that adds a new node at the beginning of a list
*@head: the 1er node of the list
*@n: the integer
*Return: return the last of the list and the len
**/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	int i;
	/*alloing memori for new node*/
	dlistint_t *last_node = malloc(sizeof(dlistint_t));
	dlistint_t *last = *head;

	/*succes of malloc?*/
	if (last_node == NULL)
		return (NULL);

	/*Duplicates string*/
	/*last_node->n = strdup(str);*/

	for (i = 0; i < n; i++)
		;
	last_node->n = i;/*length of string, str*/

	/*the new tail point to the endof the list*/
	last_node->next = NULL;

	/*if the list is empty*/
	if (*head == NULL)
	{
		*head = last_node;
		return (last_node);
	}

	/*loop to continu to full it for X argument*/
	while (last->next != NULL)
		last = last->next;
	/*remmember it need to point at the last node after*/
	last->next = last_node;
	return (last);
}
