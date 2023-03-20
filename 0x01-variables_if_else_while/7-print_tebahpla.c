#include <stdio.h>
/**
 * main - Print the alphabet using puthcar in decending order
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char cz;

	for (cz = 122; cz >= 97; cz--)
	{
		putchar(cz);
	}
	putchar('\n');
	return (0);
}
