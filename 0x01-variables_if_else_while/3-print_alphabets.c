#include <stdio.h>
/**
 * main - this is the main function
 *
 * Return: 0 when successfull
 */
int main(void)
{
	int c;
	int b;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (b = 'A'; b <= 'Z'; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
