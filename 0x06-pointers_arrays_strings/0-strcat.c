#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination
 * @src: string
 *
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int count1 = 0;
	int count2 = 0;
	int tot_count = 0;
	int i;

	while (dest[count1] != '\0')
	{
		count1++;
	}

	while (src[count2] != '\0')
	{
		count2++;
	}

	tot_count = count1 + count2;

	i = 0;
	while (count1 < tot_count)
	{
		dest[count1] = src[i];
		count1++;
		i++;
	}
	dest[count1] = '\0';

	return dest;
}
