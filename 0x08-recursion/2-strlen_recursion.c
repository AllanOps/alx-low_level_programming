#include "main.h"
/**
 * _strlen_recursion - Finds and retruns the length of a str
 * @s: The string
 * Return: 1, on success
 * -1, on error, and errno set appropriately.
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
