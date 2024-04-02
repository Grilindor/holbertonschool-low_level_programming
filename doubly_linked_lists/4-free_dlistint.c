#include "lists.h"
#include <stdlib.h>

/**
*free_dlistint - a function that frees a list
*@head: the list
*
*
**/
void free_dlistint(dlistint_t *head)
{/*creat a tampon*/
	dlistint_t *tmp;
	/*run the list to free it*/
	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
