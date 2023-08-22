#include "main.h"

/**
 * swap_int - x
 * @a: x
 * @b: x
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int tmp = *b;
	*b = *a;
	*a = tmp;
}
