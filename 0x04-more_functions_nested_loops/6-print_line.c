#include <stdio.h>
#include "main.h"

/**
 * print_line - p
 * @n: num
 *
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		i = 0;
		while (i <= n)
		{
			_putchar('_');
			i++;
		}
	}
	_putchar('\n');
}
