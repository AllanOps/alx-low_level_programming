#include <stdio.h>
/**
 * main - Printing the program name, then \n
 * @argc: The number of command line args
 * @argv: Array containing program command line args
 * Return: 0 as success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
