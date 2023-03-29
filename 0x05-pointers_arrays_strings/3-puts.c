#include "main.h"
/**
 * _puts - Prints a string, followed by a new line to stdout
 * @str: String to print
 * Return: None
 */
void _puts(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[count]);
		count++;
	}
}
