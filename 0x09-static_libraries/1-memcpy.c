#include "main.h"
/**
 * _memcpy - Copies memory area
 * @dest: Points to destination memory
 * @src: Points to source memory
 * @n: Number of bytes to be copied
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];

	}
	return (dest);
}
