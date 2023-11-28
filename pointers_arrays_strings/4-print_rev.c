#include <stdio.h>
/**
 *print_rev - Prints a string in reverse
 *@s: string to be printed
 *Return: returns nothing
 */

void print_rev(char *s)
{
char *str = s;
while (*str)
{
++str;
}
--str;
while (str >= s)
{
putchar(*str);
--str;
}
putchar('\n');
}
