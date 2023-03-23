#include "main.h"
/**
 * print_to_98 - Print numbers to 98
 * @n: Number to be passed to function
 * @x: Number to be used as difference to 98
 * Return: Nothing
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n++;
		}
	}
	else
	{
		while (n >=98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n--;
		}
	}
	printf("\n");
}
