#include "main.h"

/**
 * _isalpha - checks if character is alphabet
 *
 * @c: The character to be checked
 * Return: 1 if alphabet and 0 if anything else
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 80) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
