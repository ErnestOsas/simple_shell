#include "shell.h"
/**
 * verify_blt - Verify if input is a builtin
 * @arguments: Pointer to arguments array
 * @exit_stat: Exit status
 * Return: -1 if command is not builtin, 0 if it is
 */
int verify_blt(char **arguments, int exit_stat)
{
char *builtins[2] = {
"exit",
"env"
};
int i = 0;
int len = 2;

while (i < len && _strcmp(arguments[0], builtins[i]) != 0)
i++;
if (i == len)
return (-1);
if (_strcmp(builtins[i], "exit") == 0)
{
free(arguments[0]);
exit(exit_stat);
}
if (_strcmp(builtins[i], "env") == 0)
{
if (environ == NULL)
return (0);
write(1, environ, 1000);
}
return (0);
}
