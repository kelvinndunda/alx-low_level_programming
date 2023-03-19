#include <stdio.h>

/**
 * main - this is the main fuction
 *
 * Return: 0 when successfull
 */
int main(void)
{
	int first, second;

	for (first = 0; first < 9; first++)
	{
		for (second = first + 1; second < 10; second++)
		{
			putchar('0' + first);
			putchar('0' + second);

			if (first == 8 && second == 9)
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
