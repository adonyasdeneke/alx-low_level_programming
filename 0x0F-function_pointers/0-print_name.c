#include "function_pointers.h"

/**
 * print_name - function that print a name
 * @name: pointer for a name
 * @f: pointer for function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if ((name != NULL) && (f != NULL))
		f(name);
}
