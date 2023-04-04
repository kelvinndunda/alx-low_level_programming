#include "main.h"

/**
 * _memcpy - copy n string from src to dest
 *@dest: destination string
 *@src: source string
 *@n: number of bytes to copy
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
