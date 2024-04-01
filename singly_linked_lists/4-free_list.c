#include "lists.h"
#include <stdlib.h>

/**
*
*
*
*
**/

void free_list(list_t *head)
{
	while (head != NULL)
	{
		head = head->next;
		free(head);
	}
}
