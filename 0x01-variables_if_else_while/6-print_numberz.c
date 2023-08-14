#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i_ascii = 0;

	for (; i_ascii < 10; i_ascii++)
	{
		putchar(i_ascii + '0');
	}
	putchar('\n');

	return (0);
}
