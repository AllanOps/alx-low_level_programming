#include "main.h"
/**
 * memset - Fills memory with a const byte
 * @s: Memory area to be filled
 * @b: Const byte
 * @n: Bytes filled
 * Return: Pointer to destination
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + 1) = b;

	return (s);
}
