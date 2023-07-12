#include <stdio.h>
#include <stdlib.h>
/**
 * main - Multiplies two numbers passed from CLI
 * @argc: Number of command line args
 * @argv: Array containing program command line args
 * Return: 0 as success
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
