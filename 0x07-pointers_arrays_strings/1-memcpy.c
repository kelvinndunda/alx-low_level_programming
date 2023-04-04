#include "main.h"

/**
 * memset - test function
 * @dest: destination string
 * @src: source string
 * @n: integer
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest1 = dest;
	char *src1 = src;

	for (; n != 0; dest1++, n--, src1++)
		*dest1 = *src1;
	return (dest);
}
