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

	while (i <= 9)
	{
		j = 0;
		while (j <= 14)
		{
			if (j > 9)
			{
				/*print tens digit*/
				_putchar(j / 10 + '0');
			}
			/* Print ones digit */
			_putchar(j % 10 + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
