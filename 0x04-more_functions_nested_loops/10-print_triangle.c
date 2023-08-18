#include <stdio.h>
#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: square size
 *
 * Return: Always 0 (Success)
 */
void print_triangle(int size)
{
	int i = 0, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < size)
		{
			j = size - (i + 1);
			while (j > 0)
			{
				_putchar(' ');
				j--;
			}
			k = 0;
			while (k <= i)
			{
				_putchar('#');
				k++;
			}
			_putchar('\n');
			i++;
		}
	}
}
