#include "shell.h"
/**
 * _strcmp - Compares 2 strings
 * @str1: String to compare
 * @str2: String to compare
 * Return: 0 if the same, > 0 if str1 is higher, < 0 if str2 is higher
 */
int _strcmp(char *str1, char *str2)
{
while (*str1 && (*str1 == *str2))
{
str1++;
str2++;
}
return (*(unsigned char *) str1 - *(unsigned char *) str2);
}
