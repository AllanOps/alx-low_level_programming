#include "main.h"
/**
 * _strlen - Calculate the length of a string
 * @s: The string to calculate it's length
 * Return: length of a string.
 */

int _strlen(char *s)
{
	int i;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}
