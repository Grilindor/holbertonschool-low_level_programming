#include "lists.h"
#include <stdlib.h>

/**
* free_list -  a function that frees a list
*@head: the head of the list
*
*Return: it's void
**/

void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
