#include "main.h"

/**
 * main - 10 times the alphabet, in lowercase, followed by a new line.
 * no use of standard libraries
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char c;

	while(i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
