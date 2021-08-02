
#include <stdio.h>
#include <limits.h>
#include "holberton.h"
/**
 * main - Entry point
 * we are going to have two functions 1 to print
 * the other to change string to character
 *
 * Return: Always 0
 */
int main(void)
{
int len;
int len2;
_printf("String:[%s]\n", "I am a string !");
_printf("char: [%c]\n", 'H');
len = _printf("Percent:[%%]\n");
len2 = printf("Percent:[%%]\n");
_printf("Len:[%d]\n", len);
printf("Len:[%d]\n", len2);
_printf("%b\n", 98);
_printf("Unsigned:[%u]\n", ui);
printf("Unsigned:[%u]\n", ui);
_printf("Unsigned octal:[%o]\n", ui);
printf("Unsigned octal:[%o]\n", ui);
_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
_printf("Character:[%c]\n", 'H');
printf("Character:[%c]\n", 'H');
_printf("String:[%s]\n", "I am a string !");
printf("String:[%s]\n", "I am a string !");
_printf("Address:[%p]\n", addr);
printf("Address:[%p]\n", addr);
return (0);
}~
