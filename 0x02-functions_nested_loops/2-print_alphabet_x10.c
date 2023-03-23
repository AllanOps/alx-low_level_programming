#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet tenX
 *
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	int count, alphabet;

	count = 0;

	while (count < 10)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		count++;
		_putchar('\n');
	}
	return (0);
}
