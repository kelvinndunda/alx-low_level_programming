#include "main.h"
/**
  * *string_toupper - changes string to uppercase
  * @j: string
  * Return: string
  */
char *string_toupper(char *j)
{
	int i;

	i = 0;
	while (j[i] != '\0')
	{
		if (j[i] >= 'a' && j[i] <= 'z')
			j[i] = j[i] - 32;
		i++;
	}
	return (j);
}
