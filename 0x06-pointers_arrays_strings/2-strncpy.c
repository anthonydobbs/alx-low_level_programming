#include "main.h"

/**
 * _strncpy - This function copies a string using the n integer
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest Always
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0'; j++)
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
