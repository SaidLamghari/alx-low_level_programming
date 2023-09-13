#include "function_pointers.h"
/**
 * print_name - Start of function that prints a name.
 * @name: Name
 * @f: Function
 */
void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		f(name);
}
