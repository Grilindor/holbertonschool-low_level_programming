#include "lists.h"

/**
* print_dlistint - a function that prints all the elements of a list
*@h: the liste
*Return: return the size of the list
**/

size_t print_dlistint(const dlistint_t *h)
{
	unsigned int len = 0;

	while (h != NULL)
	{
		if (h->next == NULL)
			printf("%d\n", h->n);
		else
			printf("%d\n", h->n);
		len++;
		h = h->next;
	}
	return (len);
}
