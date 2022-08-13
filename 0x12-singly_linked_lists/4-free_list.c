#include "lists.h"
/**
* free_list - free a `list_t` list
* @head: head of linked list
*/
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
	free(head);
}
