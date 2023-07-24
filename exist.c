#include "shell.h"
/**
 * exist - Verify if file exist
 * @pathname: file path
 * Return: 0 if file exist or -1 if not
 */
int exist(char *pathname)
{
int exist_stat;

exist_stat = open(pathname, O_RDONLY);
if (exist_stat == -1)
{
return (-1);
}
close(exist_stat);
eturn (0);
}
