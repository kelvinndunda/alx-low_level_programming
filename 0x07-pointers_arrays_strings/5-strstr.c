#include "main.h"

/**
 * _strstr - search for substring
 *@haystack: string
 *@needle: substring
 * Return: pointer to the first occurence of needle
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, k;

	if (needle[0] == '\0')
		return (haystack);
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			k = 0;
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j])
				{
					k = 1;
					break;
				}
			}
			if (k == 0)
				return (haystack + i);
		}
	}
	return (NULL);
}
