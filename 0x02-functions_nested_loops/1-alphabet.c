#include "main.h"
/**
 * print_alphabet followed by a new line.
 * Description: print_alphabet You are not allowed to include standard libraries.
 * Return: 0
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
