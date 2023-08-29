#include <stdio.h>
#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: source
 * @c: character
 *
 * Return: a pointer to dest
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	/*can use *s but I currently have a better understanding of s[i]*/
	/* planning on switching to *s */
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			/*xter found, return its adrs*/
			return (&s[i]);
		}
		i++;
	}

	/*if ch is '\0' return pointer to '\0'*/
	if (c == '\0')
		return (&s[i]);

	/*character not found */
	return (NULL);
}
