#include "main.h"
/**
 * _puts_recursion - Puts a string and a new line after
 * @s: The input string
 * Return: 1 on success
 * -1, on error as errno is set appropriately
 */
void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
