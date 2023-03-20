#include <string.h>
#include <stdio.h>
/**
 * main - Printing single digit numbers base 10 using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = '0';

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
