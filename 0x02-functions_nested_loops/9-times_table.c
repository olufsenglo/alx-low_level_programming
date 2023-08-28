#include <stdio.h>
#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int i = 0, j;

	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			/*putchar((i * j) + '0');*/
			printf("%2d", i * j);
			if (j != 9)
			{
				putchar(' ');
			}
			j++;
		}
		putchar('\n');
		i++;
	}
}
