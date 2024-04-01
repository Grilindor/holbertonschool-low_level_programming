#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
*add_node_end - a function that adds a new node at the beginning of a list
*@head: the 1er node of the list
*@str: the string
*Return: return the last of the list and the len
**/

list_t *add_node_end(list_t **head, const char *str)
{
	/*alloing memori for new node*/
	list_t *last_node = malloc(sizeof(list_t));
	list_t *last = *head;

	/*succes of malloc?*/
	if (last_node == NULL)
		return (NULL);

	/*Duplicates string*/
	last_node->str = strdup(str);

	last_node->len = strlen(str);/*length of string, str*/

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
