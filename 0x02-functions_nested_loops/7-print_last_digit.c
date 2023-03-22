#include "main.h"

/**
 * print_last_digit - function to test digits
 * @c: This is the parameter to test
 * Return: value of last digit
 */

int print_last_digit(int c)
{
	int last = c % 10;

	if (last < 0)
	{
		last *= -1;
	}
	_putchar(last + '0');
	return (last);
}
