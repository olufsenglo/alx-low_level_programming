#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char first_lwr = 'a';
	char first_upr = 'A';

	while (first_lwr <= 'z')
	{
		putchar(first_lwr);
		first_lwr++;
	}
	while (first_upr <= 'Z')
	{
		putchar(first_upr);
		first_upr++;
	}
	putchar('\n');

	return (0);
}
