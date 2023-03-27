#include "main.h"

/**
 * swap_int -test function
 *
 * @a: first integer
 * @b: secone integer
 *
 * Description: function that swaps two integers
 * Return: Void
 *
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
