#include "main.h"
/**
 * main - Prints the alphabet, lowercase
 *
 * Return: no return val
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		_putchar(a);
	putchar('\n');
}
