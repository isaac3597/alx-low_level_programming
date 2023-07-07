#include "main.h"
/**
 *_memcpy - The  function that copy memory area
 *@dest: memory where is to be stored
 *@src: memory where is to be copied to
 *@n: The number of bytes
 *
 *Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
