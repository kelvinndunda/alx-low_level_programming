#include <stdio.h>
/**
 * main - this is the main function
 *
 * Return: 0 when successfull
 */
int main(void)
{
	int i;

	for (i = 25; i >= 0; i--)
	{
		putchar('a' + i);
	}
	putchar('\n');
	return (0);
}
