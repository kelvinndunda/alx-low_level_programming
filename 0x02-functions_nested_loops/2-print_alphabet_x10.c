#include "main.h"

/**
 * print_alphabet_x10 - create alphabet
 *
 * Return: void;
 */

void print_alphabet_x10(void)
{
	char a;
	int i = 0;

	while (i < 10)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
		i++;
	}
}
