#include "shell.h"
/**
 * fill_args - Fill an array with user input
 * @entry: String with the input
 * @arguments: Array to be filled
 * Return: array length
 */
int fill_args(char *entry, char **arguments)
{
int i;
char *options, *aux = entry, *command;

command = strtok(entry, "\n\t\r ");
arguments[0] = command;
for (i = 1; aux != NULL; i++)
{
options = strtok(NULL, "\n\t\r ");
aux = options;
arguments[i] = options;
}
arguments[i] = NULL;
return (i - 1);
}
