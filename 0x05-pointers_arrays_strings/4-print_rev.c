#include "main.h"

/**
 *print_rev - this is reversing string
 *@s: this is the varable to be checked
 *
 *
 *Return: void
 **/

void print_rev(char *s)
{
	int a, b, len;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	len = a;

	for (b = len - 1; b >= 0; b--)
	{
		_putchar(s[b]);
	}

	_putchar('\n');
}
