#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
*add_node - a function that adds a new node at the beginning of a list
*@head: the 1er node of the list
*@str: the string
*Return: return the new head of the list and the len
**/

list_t *add_node(list_t **head, const char *str)
{
	/*alloing memori for new node*/
	list_t *new_node = malloc(sizeof(list_t));

	/*succes of malloc?*/
	if (new_node == NULL)
		return (NULL);

	/*Duplicates string*/
	new_node->str = strdup(str);

	new_node->len = strlen(str);/*length of string, str*/

	/*the new head point to the old head*/
	new_node->next = (*head);

	/*repeat the processus*/
	(*head) = new_node;
	return (new_node);
}
