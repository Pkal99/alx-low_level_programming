#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>
/**
* free_listint_safe - free a listint_t list, including loops
* @head: address of head of list
* Return: size of list freed
*/
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *hold;
	size_t count;

	count = 0;
	current = *h;
	while (current != NULL)
	{
		count++;
		hold = current;
		current = current->next;
		free(hold);

		if (hold < current)
			break;
	}
	*h = NULL;
	return (count);
}
