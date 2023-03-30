#include "main.h"
/**
  * *_strncpy - copies a string to another
  * @dest: string destination
  * @src: string source
  * @n: elements to be changed
  * Return: return destination string
  */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
