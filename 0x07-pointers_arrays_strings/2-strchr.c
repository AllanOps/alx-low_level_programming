#include "main.h"
/**
 * _strchr - Locates a char in a given string
 * @s: The string
 * @c: The char
 * Return: Pointer, to the 1st occurence to the char (c)
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + 1) != '\0'; i++)
		if (*(s + 1) == c)
			return (s + 1);
	if (*(s + 1) == c)
		return (s + 1);
	return ('\0');
}
