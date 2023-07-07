#include "main.h"
/**
 * _strncpy - Will be abale to copy a string
 * @dest: inputs the value
 * @src: inputs the  value
 * @n: inputs the  value
 *
 * Return: dest
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

