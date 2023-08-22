#include "main.h"

/**
 * puts_half - x
 * @str: string
 *
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int len = 0;
	int i = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	i = len / 2;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
