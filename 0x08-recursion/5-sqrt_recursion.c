#include "main.h"

/**
 * sqrt2 - Evaluation
 * @a: number
 * @b: iterator
 *
 * Return: Always 0 (Success)
 */
int sqrt2(int a, int b)
{
	if ((b * b) == a)
		return (b);
	else if ((b * b) > a)
		return (-1);
	return (sqrt2(a, b + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 *
 * Return: Always 0 (Success)
 */
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
