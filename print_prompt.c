#include "shell.h"
/**
 * _printp - Prints prompt in the standard input
 * @prompt: String pointer to be printed
 * @size: Prompt length
 * Return: 0 if success or -1 if fails
 */
int _printp(const char *prompt, unsigned int size)
{
int written;

if (isatty(STDIN_FILENO))
{
written = write(STDOUT_FILENO, prompt, size);
if (written == -1)
return (-1);
}
return (0);
}
