#include "main.h"
/**
* swap_int - swap the values of two integers
* @a: int pointer typ a
* @b: int pointer type b
*/
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
