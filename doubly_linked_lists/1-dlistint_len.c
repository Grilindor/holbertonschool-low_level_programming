#include "lists.h"
/*#include <stdio.h>*/

/**
* dlistint_len - a function that returns the number
* of elements in a linked list
*@h: the list
* Return: return the len of the list
**/

size_t dlistint_len(const dlistint_t *h)
{
	unsigned int i, len = 0;

	for (i = 0; h != NULL; i++)
	{
		len++;
		h = h->next;
	}
	return (len);
}
