#include "main.h"

/**
 * prime2 - evaluation function
 * @a: number
 * @b: iterator
 *
 * Return: Always 0 (Success)
 */
int prime2(int a, int b)
{
	if (a == b)
		return (1);
	else if ((a % b) == 0)
		return (0);
	return (prime2(a, b + 1));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: number
 *
 * Return: Always 0 (Success)
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime2(n, 2));
}
