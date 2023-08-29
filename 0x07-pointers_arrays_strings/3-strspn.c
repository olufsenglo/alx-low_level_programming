#include <stdio.h>
#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: source
 * @accept: prefix substring
 *
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j;
	unsigned int found = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				found = 1;
			}
			j++;
		}
		if (found == 0)
			return (i);
		else if (found == 1)
			found = 0;

		i++;
	}

	return (0);
}
