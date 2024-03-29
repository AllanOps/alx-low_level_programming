#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Retruns a ptr to a new allocated space in memory,
 * containing a copy of the str given as the param
 * @str: Stirng to be duplicated
 * Return: Char ptr
 */
char *_strdup(char *str)
{
	char *sd;
	unsigned int size = 0, i;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		size++;
	sd = malloc(sizeof(char) * (size + 1));
	if (sd == NULL)
		return (NULL);
	for (i = 0;  i < size; i++)
		sd[i] = str[i];
	sd[size] = '\0';
	return (sd);
}
