#include "main.h"

/**
 * print_triangle - test function
 *
 * @size: number of rows
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	else
	{
		for (i = 1; i < size; i++)
		{
			for (j = 0; j < size - 1; j++)
			{
				_putchar(' ');
			}

			for (k = 1; k < i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
