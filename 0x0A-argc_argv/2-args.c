#include <stdio.h>
/**
 * main - Prints ALL arguments received
 * @argc: Number of command line args
 * @argv: Array containing program command line args
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
