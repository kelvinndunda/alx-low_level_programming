#include <stdio.h>
/**
 * main - this is thema in function
 *
 * Return: 0 when successfull
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');
	return (0);
}
