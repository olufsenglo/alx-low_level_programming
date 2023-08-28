#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int one = '0';
	int t = '0';

	for (t = '0'; t <= '9'; t++)
	{
		for (one = '0'; one <= '9'; one++)
		{
			if (!((one == t) || (t > one)))
			{
				putchar(t);
				putchar(one);
				if (!(one == '9' && t == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
