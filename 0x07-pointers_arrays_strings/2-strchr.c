#include "main.h"

/**
 * _strchr -  locates a character in a string.
 *@s: string
 *@c: char to locate
 * Return:  a pointer to the first occurrence
 */
char *_strchr(char *s, char c)
{
	unsigned int i, len;

	len = strlen(s);
	for (i = 0; i <= len; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
