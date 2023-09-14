#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - returns the sum
 * @a: integer
 * @b: integer
 *
 * Return: Success
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference
 * @a: int
 * @b: int
 *
 * Return: Success
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the multiple
 * @a: int
 * @b: int
 *
 * Return: Succ
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns division
 * @a: int
 * @b: int
 *
 * Return: Suc
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
 * op_mod - returns modulus
 * @a: int
 * @b: int
 *
 * Return: Suc
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
