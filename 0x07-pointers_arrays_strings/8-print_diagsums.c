#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 *@a: array
 *@size: the size
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j = 0, sum_left = 0, sum_right = 0;

	for (i = 0; i < size * size; i += size)
	{
		sum_left += a[i + j];
		sum_right += a[i + (size - 1) - j];
		j++;
	}
	printf("%d, %d\n", sum_left, sum_right);
}
