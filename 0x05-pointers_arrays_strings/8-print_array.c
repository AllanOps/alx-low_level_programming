#include "main.h"
#include <stdio.h>
/**
 * print_array - Prints n elements of an array of int type
 * @a: The input array
 * @n:  The n input elements
 * Return: no return
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
