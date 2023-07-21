#include "function_pointers.h"
/**
 * print_name - Prints names
 * @name: The input name
 * @f: Function pointer
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
