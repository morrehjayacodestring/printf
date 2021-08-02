#include "holberton.h"

/**
 * print_s - print a string of character
 * @arg: the va_list argument
 *
 * Return: the number of bytes printed
 */
int print_s(va_list arg)
{
int counter = 0;
char *s = va_arg(arg, char *);
if (s == NULL)
s = "(null)";
while (s[counter])
{
_putchar(s[counter++]);
}
return (counter);
}
