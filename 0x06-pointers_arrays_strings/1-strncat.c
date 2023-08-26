#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination
 * @src: string
 * @n: number of bytes
 *
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	
	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';

	return dest;
}
