#include "main.h"

/**
 * _abs - this is the function to find absolute value of numbers
 *
 * @c: this is the number to test
 * Return: absolute value of number or 0
 */

int _abs(int c)
{
	if (c < 0)
	{
		int abs_val = c * -1;

		return (abs_val);
	}
	return (c);
}
