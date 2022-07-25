#include "holberton.h"
/**
* _strpbrk - Search a string for any of a set of bytes.
* @s: string
* @accept: string to match
* Return: Pointer to the byte in `s` that matches one of the bytes in `accept`
*/
char *_strpbrk(char *s, char *accept)
{
	int a;
	int b;
	char *p;

	a = 0;
	while (s[a] != '\0')
	{
		b = 0;
		while (accept[b] != '\0')
		{
			if (accept[b] == s[a])
			{
				p = &s[i];
				return (p);
			}
			j++;
		}
		i++;
	}

	return (0);
}
