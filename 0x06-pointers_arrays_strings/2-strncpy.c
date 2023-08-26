#include "main.h"

/**
 * _strncpy - copies a string.
 * @dest: destination
 * @src: string
 * @n: number of bytes
 *
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	for ( ; i < n; i++)
		dest[dest_len + i] = '\0';

	return dest;
}
