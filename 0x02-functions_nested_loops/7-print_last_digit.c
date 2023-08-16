#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: number to test
 *
 * Return: inputed number
 */
int print_last_digit(int n)
{
	int c = n % 10;

	c = c < 0 ? -c : c;

	_putchar(c + '0');

	return (c);
}
