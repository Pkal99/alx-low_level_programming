#include "lists.h"
/**
* print_list - prints elements of list_t
* @h: pointer to the head pointer
* Return: returns number of elements
*/
size_t print_list(const list_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		printf("[%d] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}
	return (count);
}
