#include "main.h"
/**
 * peime - Evaluates from 1 to n
 * @x: Number set as n
 * @y: Number that iterates to n from 1
 *
 * Return: 1, on success
 * 0, when not prime
 * -1, on error, errno set appropriately
 */
int peime(int x, int y)
{
	if (x == y)
		return (1);
	else if (x % y == 0)
		return (0);
	return (peime(x, y + 1));
}
/**
 * is_prime_number - Checks if an int is prime or nah
 * @n: Number to be checked
 * Return: 1, on success
 * -1, on error, as errno is set appropriately
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (peime(n, 2));
}
