#include "main.h"

/**
 * print_numbers -test function
 *
 * Description: prints numbers, from 0 to 9 followed by a new line.
 * Return:
 */

void print_numbers(void)
{
	int n;

	for (n = '0'; n <= 9; n++)
	{
		_putchar(n);
	}
	n++;
	_putchar('\n');
}