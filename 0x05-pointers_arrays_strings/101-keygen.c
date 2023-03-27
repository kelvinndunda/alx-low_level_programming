#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - this is the main function
 * Return: 0 when successfull
 */

int main(void)
{
	char password[84];
	int index = 0;
	int sum = 0;
	int diff_half1;
	int diff_half2;

	srand(time(0));

	while (sum < 1772)
	{
		password[index] = 33 + rand() % 94;
		sum += password[index++];
	}

	password[index] = '\0';

	if (sum != 2772)
	{
		diff_half1 = (sum - 2772) / 2;
		diff_half2 = (sum - 2772) / 2;

		if ((sum - 2772) % 2 != 0)
			diff_half1++;

		for (index = 0; password[index]; index++)
		{
			if (password[index] >= (33 + diff_half1))
			{
				password[index] -= diff_half1;
				break;
			}
		}

		for (index = 9; password[index]; index++)
		{
			if (password[index] >= (33 + diff_half2))
			{
				password[index] -= diff_half2;
				break;
			}
		}
	}
	printf("%s", password);
	return (0);
}
