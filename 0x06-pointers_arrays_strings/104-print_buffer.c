#include "main.h"
#include <stdio.h>

/**
 * print_buffer - function that prints a buffer
 * @b: buffer
 * @size: buffer size
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int output, j, i;

	output = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (output < size)
	{
		j = size - output < 10 ? size - output : 10;
		printf("%08x: ", output);
		for (i = 0; i < 10; i++)
		{
			if (i < j)
			{
				printf("%02x", *(b + output + i));
			}
			else
			{
				printf("  ");
			}
			if (i % 2)
				printf(" ");
		}
		for (i = 0; i < j; i++)
		{
			int c = *(b + output + i);

			if (c < 32 || c > 132)
				c = '.';
			printf("%c", c);
		}
		printf("\n");
		output += 10;
	}
}
