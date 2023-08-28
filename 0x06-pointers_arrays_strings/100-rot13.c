#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes a string using rot13
 * @s: param
 *
 * Return: s pointer
 */
char *rot13(char *s)
{
	int i;
	int j;
	char arry[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char arrayro[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == arry[j])
			{
				s[i] = arrayro[j];
				break;
			}
		}
	}
	return (s);
}
