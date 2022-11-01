#include "main.h"

/**
 * _strchr - locate character in a string
 * @s: source string
 * @c: character to be found
 *
 * Return: if c is found - a pointer to first occurance
 *         if c is not found - NULL
 */
char *_strchr(char *s, char c)
{
	int a = 0' b;

	while (s[a])
	{
		a++;
	}
	for (b = 0; b <= a; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}
	return ('\n');
}
