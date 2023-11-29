#include <stdio.h>
/**
 *_atoi - Converts an array to an integer
 *@s: string to be converted
 *Return: returns the sign of the integer times the number itself
 */

int _atoi(char *s)
{
char *start = s;
int res = 0, sign = 1;
while (*s)
{
if (*s == '-')
sign *= -1;
else if (*s >= '0' && *s <= '9')
break;
++s;
}
s = start;
while (*s)
{
if (*s >= '0' && *s <= '9')
{
if (sign > 0)
res = res * 10 + (*s - '0');
else
res = res * 10 - (*s - '0');
if (*(s + 1) < '0' || *(s + 1) > '9')
{
break;
}
}
++s;
}
return (res);
}
