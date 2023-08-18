#include <stdio.h>
#include "main.h"

/**
 * print_diagonal: p
 * @n: n
 *
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
	int i = 0, j;

	while (i <= n)
	{
		j = 0;
		while (j <= n - 1)
		{
			if (n > 0)
			{
				_putchar(' ');
			}
			j++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
}
