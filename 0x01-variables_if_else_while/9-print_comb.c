#include <stdio.h>
/**
 * main - Printing possible combos of  single digit nums
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int res = '0';

	for (res = '0'; res <= '9'; res++)
	{
		if (res != 9)
		{
			putchar(',');
			putchar(' ');
		}
		putchar(res);
	}
	putchar('\n');
	return (0);
}
