#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: n
 *
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
	int i = 0, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < n)
		{
			j = 0;
			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
}
