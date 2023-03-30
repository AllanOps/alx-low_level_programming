#include "main.h"
/**
 * print_last_digit - Prints last digit of an input number
 *
 * Return: Last digit
 */
int print_last_digit(int n)
{
	int ans;

	ans = n % 10;
	_putchar(ans);
	return(ans);
}
