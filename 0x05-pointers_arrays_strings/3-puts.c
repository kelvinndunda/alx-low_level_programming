#include "main.h"

/**
 * _puts - test function.
 *
 * @str: character parameter
 * Decription: prints a string followed by a new line.
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
