#include "main.h"


/**
 * main - check the code.
 *check if characters are upper or lower by return 1 0r 0,
 * Return: Always 0.
 */
int _isupper(int c)
{

	if (c >= '65' && c <= '90')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
