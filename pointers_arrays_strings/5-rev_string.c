#include <stdio.h>
/**
 *rev_string - Reverses a string
 *@s: string to be reversed
 *Return: returns nothing
 */

void rev_string(char *s)
{
char *start = s;
char *end = s;
char temp;
while (*end)
{
++end;
}
--end;
while (end > start)
{
temp = *start;
*start = *end;
*end = temp;
++start;
--end;
}
}
