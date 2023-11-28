#include <stdio.h>
/**
 *puts2 - Prints every other character on a string
 *@str: The string to be printed
 *Return: returns nothing
 */

void puts2(char *str)
{
const char *s = str;
putchar(*s);
s += 2;
while (*s)
{
putchar(*s);
s += 2;
}
putchar('\n');
}
