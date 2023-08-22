#include <stdio.h>
#include "main.h"

/**
 * print_array - x
 * @a: array
 * @n: number of elements in array
 *
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
		i++;
	}
	printf("\n");
}
