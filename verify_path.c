#include "shell.h"
/**
 * verify_path - Verify if the 1st command can be executed
 * @arguments: Array of entries by the user
 * Return: 0 if successful, or -1 if the exe file exist not
 */
int verify_path(char **arguments)
{
char *global_path = NULL;
char *global_dup = NULL;
char *dir_path = NULL;
char *command_path = NULL;
char *test_cph[121];
int exist_stat = -1, i = 0;

global_path = _getenv("PATH");
if (global_path == NULL)
return (-1);
global_dup = (_strdup(global_path));
dir_path = strtok(global_dup, ":");
if (dir_path == NULL)
return (-1);
free(global_path);
for (; exist_stat == -1 && dir_path != NULL; i++)
{
command_path = append_command(dir_path, arguments[0]);
test_cph[i] = command_path;
exist_stat = exist(test_cph[i]);
dir_path = strtok(NULL, ":");
}
i--;
free(global_dup);
free_grid(test_cph, i);
if (exist_stat == 0)
{
arguments[0] = test_cph[i];
return (0);
}
else
{
free(test_cph[i]);
return (-1);
}
}
