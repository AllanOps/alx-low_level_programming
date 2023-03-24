#include <stdio.h>
/**
 * main - Cause infinite loop
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	printf("Infinite loop incoming: \n");

	i = 0;

	/*
	 * while (i < 10)
	 * {
	*	putchar(i);
	* }
	*/

	printf("Infinite loop avoided! \\0/\n");

	return (0);
}
