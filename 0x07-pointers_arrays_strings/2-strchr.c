#include "main.h"
#include <stddef.h>

/**
 * _strchr - locate character in a string
 * @s: source string
 * @c: character to be found
 *
 * Return: a pointer to the char or NULL
 */
char *_strchr(char *s, char c)
{
	if (s == NULL)
		return (NULL);
	for (; *s; s++)
	{
		if (*s == c)
			return (s);
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
