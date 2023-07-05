#include "main.h"
/**
 * factorial - Get the factorial of n
 * @n: Number to be factorized
 *
 * Return: 1, on success
 * -1, on error, and errno set appropriately
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
