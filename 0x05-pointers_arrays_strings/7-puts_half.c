#include "main.h"
#include <string.h>

/**
 *puts_half - this is printing the second half of a string
 *@str: this is the string
 *
 *Return: void
 **/

void puts_half(char *str)
{
	int len = strlen(str);
	int mid = (len + 1) / 2, index;

	for (index = mid; index >= mid; index++)
	{
		if (index >= len)
			break;
		_putchar(str[index]);
	}
	_putchar('\n');

}

