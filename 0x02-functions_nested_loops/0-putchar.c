#include <stdio.h>
/**
 *main - Print _putchar followed by a new line.
 *Description: printing putchar characters.
 *Return: 0
 */
int main(void)
{
	char abc[] = "_putchar";
	int i = 0;

	while (abc[i] != '\0')
	{
		_putchar(abc[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
