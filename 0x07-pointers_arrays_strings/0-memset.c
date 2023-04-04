#include "main.h"

/**
 * *_memset - test function
 * @*s:character byte
 * @*b: character 
 * @n:unsigned integer
 *
 * Description:function that fills memory with a constant byte
 * Return: char pointer
 * 
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	for (; n != 0; p++, n--)
		*p = b;
	return (s);
}

