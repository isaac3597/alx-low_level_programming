#include <unistd.h>
/**
 * _putchar -Will be able to help in  writing the character c to stdout
 * @c: The character to printed
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
