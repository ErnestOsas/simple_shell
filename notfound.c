#include "shell.h"
/**
 * print_not_found - Prints error message when command not found
 * @arguments: array of args inputted by the user
 * @counter: Times the shell is executed
 * Return: Exit
 */
int print_not_found(char **arguments, int counter)
{
char *shell_name = "hsh";if (isatty(STDIN_FILENO))
{
write(STDERR_FILENO, shell_name, _strlen(shell_name));
}
else
{
write(STDERR_FILENO, "./", 2);
write(STDERR_FILENO, shell_name, _strlen(shell_name));
}
write(STDERR_FILENO, ": ", 2);
print_numbers(counter);
write(STDERR_FILENO, ": ", 2);
write(STDERR_FILENO, arguments[0], _strlen(arguments[0]));
write(STDERR_FILENO, ": not found\n", 12);
return (127);
}
