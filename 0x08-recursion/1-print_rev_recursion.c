#include "main.h"
/**
 * _print_rev_recursion - Printing a string, in reverse
 * @s: The string
 * Return: 1, on success
 * -1, on error, and errno is appropriately defined
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
