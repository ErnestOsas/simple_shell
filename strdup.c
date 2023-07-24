#include "shell.h"
/**
 * _strdup - duplicates a string
 * @str: string to duplicate
 * Return: pointer to the duplicated string or NULL if it fails
 */
char *_strdup(char *str)
{
unsigned int i = 0, len = 0;
char *duplicate;

if (str == NULL)
return (NULL);
while (str[len] != '\0')
len++;
duplicate = malloc(sizeof(char) * (len + 1));
if (duplicate == NULL)
return (NULL);
while (i <= len)
{
duplicate[i] = str[i];
i++;
}
return (duplicate);
}
