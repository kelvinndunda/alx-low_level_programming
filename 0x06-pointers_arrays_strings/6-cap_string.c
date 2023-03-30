#include "main.h"
/**
  * *cap_string - capitalizes all words of a string
  * @j: string
  * Return: string
  */
char *cap_string(char *j)
{
	int i = 0;

	while (j[i])
	{
		while (!(j[i] >= 'a' && j[i] <= 'z'))
		i++;
		if (j[i - 1] == ' ' ||
		j[i - 1] == '\t' ||
		j[i - 1] == '\n' ||
		j[i - 1] == ',' ||
		j[i - 1] == ';' ||
		j[i - 1] == '.' ||
		j[i - 1] == '!' ||
		j[i - 1] == '?' ||
		j[i - 1] == '"' ||
		j[i - 1] == '(' ||
		j[i - 1] == ')' ||
		j[i - 1] == '{' ||
		j[i - 1] == '}' ||
		i == 0)
			j[i] -= 32;
		i++;
	}
	return (j);
}
