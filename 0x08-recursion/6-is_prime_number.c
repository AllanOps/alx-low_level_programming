#include "main.h"
/**
 * is_prime_number - Checks if an in is a prime or nah
 * @n: Number to be checked
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
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (peime(n, 2));
}
