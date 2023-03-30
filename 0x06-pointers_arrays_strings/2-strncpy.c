#include "main.h"
/**
 * _strncpy - Copies a string
 * @dest: The destination
 * @src: The source string
 * @n: Amount of bytes from the source
 * Return: The pointer to destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
