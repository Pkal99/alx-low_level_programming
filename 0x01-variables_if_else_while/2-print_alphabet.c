#include <stdio.h>
/**
 * main - main block function
 * Description: print the alphabet in lowercase letters a-z
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
