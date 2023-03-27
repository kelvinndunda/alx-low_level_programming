#include "main.h"
#include <string.h>

/**
 *puts2 - this is printing all other charactors
 *@str: is the string
 *
 *
 *Return: void.
 **/

void puts2(char *str)
{
	int index;
	int len = strlen(str);

	for (index = 0; index < len; index += 2)
	{
	_putchar(str[index]);
	}
	_putchar('\n');
}
