#include "mainfunctionPo.h"
#include "main.h"
/**
* print_name - Print a name from a function pointer
* @name: char string name
* @f: function pointer that takes a string argument
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
