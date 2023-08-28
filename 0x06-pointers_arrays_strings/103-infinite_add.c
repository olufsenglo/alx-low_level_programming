#include "main.h"

/**
 * rev_arr - reverse array
 *
 * @n: param
 *
 */

void rev_arr(char *n)
{
	int i = 0;
	int j = 0;
	char t;

	while (*(n + i) != '\0')
		i++;
	i--;

	for (j = 0; j < i; j++, i--)
	{
		t = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = t;
	}
}

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer
 * @size_r: buffer size
 *
 * Return: pointer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int exss = 0, i = 0, j = 0, digits = 0;
	int v1 = 0, v2 = 0, tmp_total = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || exss == 1)
	{
		if (i < 0)
			v1 = 0;
		else
			v1 = *(n1 + i) - '0';
		if (j < 0)
			v2 = 0;
		else
			v2 = *(n2 + j) - '0';
		tmp_total = v1 + v2 + exss;
		if (tmp_total >= 10)
			exss = 1;
		else
			exss = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (tmp_total % 10) + '0';
		digits++;
		j--;
		i--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_arr(r);
	return (r);
}
