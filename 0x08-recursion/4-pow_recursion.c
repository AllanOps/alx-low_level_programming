#include "main.h"
/**
 * _pow_recursion - Gets the power of a number
 * @x: Number to get the power of
 * @y: Power to raise X to
 *
 * Return: 1, on success
 * -1, on error, errno defined appropriately
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
