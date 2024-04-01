#include "lists.h"
#include <stdio.h>


/**
* print_list - a function that prints all the elements of a list
*@h: the liste
*Return: return the size of the list
**/

size_t print_list(const list_t *h)
{
	unsigned int i, len = 0;

	for (i = 0; h != NULL; i++)
	{
		if (h->str == NULL)
			printf("[%d] (nil)\n", len);
		else
			printf("[%d] %s\n", h->len, h->str);
		len++;
		h = h->next;
	}
	return (len);
}
