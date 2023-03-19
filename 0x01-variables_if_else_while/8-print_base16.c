#include <stdio.h>
/**
 * main - this is the main function
 *
 * Return: 0 when successfull
 */
int main(void)
{
	int n;

	for (n = 0; n < 16; n++)
	{
		if (n < 10)
		{
			putchar('0' + n);
		}
		else
		{
			putchar('a' + (n - 10));
		}
	}
	putchar('\n');
	return (0);
}
	
