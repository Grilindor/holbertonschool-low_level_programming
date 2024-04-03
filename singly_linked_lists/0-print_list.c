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

	/* Traverse the list until we reach the end */
	for (i = 0; h != NULL; i++)
	{
		/* Check if the string is NULL */
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			/* Print the length and string */
			printf("[%d] %s\n", h->len, h->str);
		len++;
		/* Move to the next element of the list */
		h = h->next;
	}
	return (len);
}
