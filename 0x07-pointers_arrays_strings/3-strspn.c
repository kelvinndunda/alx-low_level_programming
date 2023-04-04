#include "main.h"

/**
 * _strspn -  gets the length of a prefix substring
 *@s: string
 *@accept: substring
 * Return: the number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k;

	for (i = 0; s[i] != '\0'; i++)
	{
		k = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				k = 1;
		}
		if (k == 0)
			return (i);
	}
	return (i);
}

