#include "main.h"

/**
 * palind2 - obtains length
 * @a: string
 * @l: length
 *
 * Return: Always 0 (Success)
 */
int palind2(char *a, int l)
{
	if (*a == 0)
		return (l - 1);
	return (palind2(a + 1, l + 1));
}

/**
 * palind3 - compares string
 * @a: string
 * @l: length
 *
 * Return: Always 0 (Success)
 */
int palind3(char *a, int l)
{
	if (*a != *(a + l))
		return (0);
	else if (*a == 0)
		return (1);
	return (palind3(a + 1, l - 2));
}

/**
 * is_palindrome -  returns 1 if a string is a palindrome and 0 if not
 * @s: string
 *
 * Return: Always 0 (Success)
 */
int is_palindrome(char *s)
{
	int l;

	l = palind2(s, 0);
	return (palind3(s, l));
}
