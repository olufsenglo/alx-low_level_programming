#include <stdio.h>
#include "main.h"

/**
 * more_numbers - more_numbers
 *
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int i = 0, j;

	while (i <= 10)
	{
		j = 0;
		while (j <= 9)
		{
			_putchar(j + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
