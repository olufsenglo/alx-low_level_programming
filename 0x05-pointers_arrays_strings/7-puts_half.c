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

	i = len % 2 == 0 ? len / 2 : (len - 1) / 2 + 1;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
