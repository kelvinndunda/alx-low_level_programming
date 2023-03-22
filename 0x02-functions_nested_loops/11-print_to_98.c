#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - this is a function that prints to ninety eight
 *
 * @n: this is the starting point
 *
 * Return: void
 */

void print_to_98(int n)
{
	if (n == 98)
	{
		printf("%d\n", n);
	} else if (n < 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n == 98)
			{
				printf("\n");
			} else
			{
				printf(", ");
			}
		}
	} else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n == 98)
			{
				printf("\n");
			} else
			{
				printf(", ");
			}
		}
	}
}
