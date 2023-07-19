#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - This will be able to print the name using pointer to function
 * @name: The string to be added
 * @f: The pointers to the function
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

