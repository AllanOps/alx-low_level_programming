#include "function_pointers.h"
/**
 * array_iterator - Executes a function passed as a param
 * on eachnelement of an array
 * @array: Input int array
 * @size: Size of the input array
 * @action: Pointer to the function
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
