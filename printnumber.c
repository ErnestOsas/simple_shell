#include "shell.h"
/**
 * print_numbers - Prints numbers that print the error message
 * @n: printed number
 * Return: Number
 */
int print_numbers(int n)
{
unsigned int number;
int i = 0;

if (n < 0)
{
number = -n;
i = i + _putchar('-');
}
else
{
number = n;
}
for (; number > 0; number /= 10)
i = i + _putchar(number % 10 + '0');
return (i);
}
