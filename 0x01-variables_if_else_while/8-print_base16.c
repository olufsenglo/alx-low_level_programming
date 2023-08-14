#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int f_num = 0;
	char f_char = 'a';

	while (f_num <= 9)
	{
		putchar(f_num + '0');
		f_num++;
	}
	while (f_char <= 'f')
	{
		putchar(f_char);
		f_char++;
	}
	putchar('\n');

	return (0);
}
