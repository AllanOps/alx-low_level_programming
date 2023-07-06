#include "main.h"
/**
 * sqroot - Evaluates from 1 to n
 * @x: Same number as assigned to n
 * @y: Number iterating from 1 to n
 * Return: 1, on success
 * -1, on error, as set appropriately
 */
int sqroot(int x, int y)
{
	if (y * y == x)
		return (y);
	else if (y * y > x)
		return (-1);
	return (sqroot(x, y + 1));
}
/**
 * _sqrt_recursion - Gices the natural square root of n
 * @n: Number to be rooted
 * Return: 1, on success
 * -1, on error, as errno is set appropriately
 */
int _sqrt_recursion(int n)
{
	return (sqroot(n, 1));
}
