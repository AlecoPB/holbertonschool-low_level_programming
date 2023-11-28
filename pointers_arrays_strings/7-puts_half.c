#include <stdio.h>
/**
 *puts_half - prints the second half of a string
 *@str: string to be half-printed
 *Return: lenght of the string
 */

void puts_half(char *str)
{
int lenght;
const char *s = str;
while (*s)
{
++s;
}
lenght = s - str;
if (lenght % 2 != 0)
{
--lenght;
}
lenght /= 2;
s -= lenght;
while (*s)
{
putchar(*s);
++s;
}
putchar('\n');
}
