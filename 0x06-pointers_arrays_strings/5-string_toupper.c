#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: arra yelements
 * @n: number of elements of the array
 *
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int p = n / 2;
	int tmp = 0;
	
	n = n - 1;

	while (i < p)
	{
		tmp = a[n - i];
		a[n - i] = a[i];
		a[i] = tmp;
		i++;
	}
}
