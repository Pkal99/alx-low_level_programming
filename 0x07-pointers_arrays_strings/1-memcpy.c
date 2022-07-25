#include "main.h"
/**
* _memcpy - copy memory area
* @dest: char array to copy into kal
* @src: char array to copy from
* @n: number of elements to copy
* Return: pointer to `dest`
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *kal;

	kal = dest;
	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	return (kal);
}
