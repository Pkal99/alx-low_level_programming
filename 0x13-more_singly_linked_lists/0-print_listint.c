#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
* print_listint - prints all elements of a listint_t list
* @h: listint_t pointer
* Return: no of nodes
*/
size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
