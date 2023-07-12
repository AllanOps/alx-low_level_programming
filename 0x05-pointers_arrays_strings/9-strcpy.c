#include "main.h"
#include <stdio.h>
/**
 * _strcpy - Copies the string pointed to by src,
 * with the terminating null byte, to the
 * buffer pointed to by var dest
 * @dest: The destination
 * @src:The source
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}
