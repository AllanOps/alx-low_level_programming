#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Adds two positive numbers
 * @argc: Number of command line arguments
 * @argv: Array containing program command kine args
 * Return: 0 as success
 */
int main(int argc, char *argv[])
{
	int i, j, add = 0;

	for (i = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
