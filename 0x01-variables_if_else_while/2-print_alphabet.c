#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char first_c = 'a';

	while (first_c <= 'z')
	{
		putchar(first_c);
		first_c++;
	}
	putchar('\n');

	return (0);
}
