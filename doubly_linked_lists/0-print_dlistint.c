#include "lists.h"

/**
* print_dlistint - a function that prints all the elements of a list
*@h: the liste
*Return: return the size of the list
**/

size_t print_dlistint(const dlistint_t *h)
{
	unsigned int i, len = 0;

	for (i = 0; h != NULL; i++)
	{
		if (h->next == NULL)
			printf("%i\n", h->n);
		else
			printf("%i\n", h->n);
		len++;
		h = h->next;
	}
	return (len);
}
