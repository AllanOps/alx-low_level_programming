#include "main.h"
#include <stdlib.h>
/**
 * create_array - Creates and initializes an arr of chars w a specific char
 * @size: Size of arr
 * @c: Char to init arr
 * Return: pointer to char
 */
char *create_array(unsigned int size, char c)
{
	char *char_arr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	char_arr = malloc(sizeof(char) * size);
	if (char_arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		char_arr[i] = c;
	return (char_arr);
}
