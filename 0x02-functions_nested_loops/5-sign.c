#include "main.h"

/**
 * print_sign - checks number if positive or negative
 * @n: number to be checked by function
 * Return: 1 when n is positive, 0 when n is zero and -1 if n is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	} else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}

