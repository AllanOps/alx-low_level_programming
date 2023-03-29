#include "main.h"
/**
 * print_sign - Prints the sign of an input number
 * @n: Input integer
 * Return: 1, 0, or -1 depending on n
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
