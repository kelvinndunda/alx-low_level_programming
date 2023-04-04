#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *@s: string to fill
 *@b: byte to fill
 *@n: number of bytes to fill
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
