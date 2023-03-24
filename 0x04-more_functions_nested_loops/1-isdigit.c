#include "main.h"

/**
 * _isdigit - function to test
 * @c: test character
 * Return 1  when  digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
