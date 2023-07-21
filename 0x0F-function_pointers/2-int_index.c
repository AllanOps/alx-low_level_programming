#include "funtion_pointers.h"
/**
 * int_index - Searches for an int in an array of ints
 * @array: Array of integers
 * @size: Size of the array
 * @cmp: Pointer to the func that compares values
 * Return: If !element matches or size is less/equal 0;
 * give -1.
 * Otherwise give the index of the first element for which
 * the cmp function daen't return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < siz; index++)
	{
		if (cmp(array[index]) != 0)
		{
			return (index);
		}
	}
	return (-1);
}
