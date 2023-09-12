#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: integers
 * @size: size
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	printf("%d\n", a[0][0]);
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				printf("%d %d\n", i, j);
				/*printf("%d\n", a[i][j]);*/
			}
		}
	}
}
