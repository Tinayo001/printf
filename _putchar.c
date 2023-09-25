#include <unistd.h>

/**
 * _putchar - writes a character to stdout
 * @c: the character to print
 * Return: 1 (Success0
 * On error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
