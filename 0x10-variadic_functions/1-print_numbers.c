#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_numbers - Printing numebrs and a new line
 * @separator: String to be printed btwn numbers
 * @n: Numbers passed to the function
 *
 * Return: Void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numbers;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(numbers);
}
