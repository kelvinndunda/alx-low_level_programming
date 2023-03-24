#include "main.h"

/**
 * _isupper - function to test
 * @c: letter to check
 * Return: 1 when uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}

