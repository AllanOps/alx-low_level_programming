#include "main.h"
/**
 * factorial - Get the factorial of a specified number.
 * @n: Number to be factorized
 * return: 1, upon success
 * Returns -1 on error
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
