#include "main.h"
#include <stdio.h>

/**
 * cap_string -  capitalizes all words of a string
 * @c: character
 *
 * Return: string
 */
char *cap_string(char *c)
{
	int i = 0;

	while (c[i] != '0')
	{
		if (c[i] == ' ' || c[i] == ',' || c[i] == ';' || c[i] == '!' || c[i] == '.' || c[i] == '\t' || c[i] == '\n')
		{
			if (c[i] == '\n')
			{
				c[i] = '~';
			}
			if (c[i] == '\t')
			{
				c[i] = '%';
			}
			if (c[i] == ' ')
			{
				c[i] = '-';
			}
		/*	if (c[i + 1] != '\0' && c[i + 1] >= 'a' && c[i + 1] <= 'z'){
				putchar(c[i]);
				putchar(' ');
				putchar(c[i + 1]);
				putchar('\n');
				c[i + 1] = c[i + 1] - 32;
			}*/
		}
		i++;
	}

	return c;
}
