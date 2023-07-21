#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - Struct operation
 *
 * @a: The (Addition) operator
 * @b: Associated function
 * Return: Addition result of type int
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Struct operation
 *
 * @a: The (Subtraction) operator
 * @b: Associated function
 * Return: a subtracted int
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Struct operation
 *
 * @a: The (Multiplication) operator
 * @b: Associated function
 * Return: a multiplied int
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Struct operation
 *
 * @a: The (Division) operator
 * @b: Associated function
 * Return: A divided result type int
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Struct operation
 *
 * @a: The (Modulus/Modulo) operator
 * @b: Associated function
 * Return: A remainder type int
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
