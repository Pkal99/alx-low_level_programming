#include "main.h"
#include <stdlib.h>
/**
* _strdup - Duplicate a string using malloc
* @str: string to duplicate
* Return: Pointer to a the new duped string
*/
char *_strdup(char *str)
{
	char *x;
	int i;
	int c;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	x = malloc(i * sizeof(*x) + 1);
	if (x == NULL)
		return (NULL);

	for (c = 0; c < i; c++)
		x[c] = str[c];
	x[c] = '\0';

	return (x);
}
