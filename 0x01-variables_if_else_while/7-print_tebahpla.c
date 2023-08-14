#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char l_c = 'z';

	while (l_c >= 'a')
	{
		putchar(l_c);
		l_c--;
	}
	putchar('\n');

	return (0);
}
