#include "shell.h"
/**
 * _getenv - Get global variable content
 * @global_var: Variable to extract from environ
 * Return: Pointer to the content of a variable, NULL if it fails
 */
char *_getenv(char *global_var)
{
int i = 0;
const char cutter[] = "=";
char *env_tok, *envdup, *env_tok_dup;

if (global_var == NULL || environ == NULL)
return (NULL);
while (environ[i] != NULL)
{
envdup = _strdup(environ[i]);
env_tok = strtok(envdup, cutter);
if (_strcmp(env_tok, global_var) == 0)
{
env_tok = strtok(NULL, cutter);
env_tok_dup = _strdup(env_tok);
free(envdup);
return (env_tok_dup);
}
i++;
free(envdup);
}
return (NULL);
}
