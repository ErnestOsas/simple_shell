#include "shell.h"

/**
 * _putchar - writes the c character to stdout
 * @c: The character to print
 * Return: when success 1.
 * On error, -1 is returned, and errno is set.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
