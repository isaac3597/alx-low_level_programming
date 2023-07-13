#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - This allocates the memory using malloc
 * @b: The numbers  of bytes to be allocated
 *
 * Return: The pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}

