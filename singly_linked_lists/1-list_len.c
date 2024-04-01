#include "lists.h"
/*#include <stdio.h>*/

/**
* list_len - a function that returns the number of elements in a linked list
*@h: the list
* Return: return the len of the list
**/

size_t list_len(const list_t *h)
{
	unsigned int i, len = 0;

	for (i = 0; h != NULL; i++)
	{
		if (h->str == NULL)
			return (len);
		len++;
		h = h->next;
	}
	return (len);
}
