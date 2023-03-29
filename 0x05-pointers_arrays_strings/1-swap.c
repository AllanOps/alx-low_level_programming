#include "main.h"
/**
 * swap_int - Swaps values of 2 ints
 * @a: First int
 * @b: Second int
 * Return: None
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = *c;
}
