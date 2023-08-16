#include "main.h"

/**
 * print_sign - prints the sign of a number.
 * @n: number to test
 *
 * Return: 1 n is greater than zero
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('0' + '0');
		return (0);
	}
}
