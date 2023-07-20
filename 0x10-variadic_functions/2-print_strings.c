#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - Prints strings and a new line
 * @separator: The strings to be printed btwn strings
 * @n: Number of strings
 *
 * Return: Void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list strings;

	if (separator == NULL)
		separator = "";

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(strings, char *);

		if (s == NULL)
			s = "(nil)";
		printf("%s", s);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
