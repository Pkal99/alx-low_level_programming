#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
* add_node - add a new node at the beginning of `list_t` list
* @head: double pointer to head
* @str: string to be saved in new node, must be duplicated
* Return: Address of new element or NULL if failed
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	if (head != NULL && str != NULL)
	{
		temp = malloc(sizeof(list_t));
		if (temp == NULL)
			return (NULL);

		temp->str = strdup(str);
		temp->len = _strlen(str);
		temp->next = *head;

		*head = temp;

		return (temp);
	}
	return (0);
}
/**
* _strlen - Returns the length of a string
* @s: String to count
* Return: String length
*/
int _strlen(const char *s)
{
	int c = 0;

	while (*s)
	{
		s++;
		c++;
	}
	return (c);
}
