#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
* sum_dlistint - function that returns the sum of all
*  the data (n) of a linked list
* @head:the list
* Return: sum
**/

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current  = head;
	int sum = 0;
/*if head is empty*/
	if (head == NULL)
		return (0);
/*move forward and add value*/
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

/*return the total*/
	return (sum);
}
