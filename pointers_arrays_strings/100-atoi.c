#include <stdio.h>
/**
 *_atoi - Converts an array to an integer
 *@s: string to be converted
 *Return: returns the sign of the integer times the number itself
 */

int _atoi(char *s)
{
int res = 0, sign = 1;
while (*s)
{
if (*s == '-')
sign *= -1;
if (*s >= '0' && *s <= '9')
rest = res * 10 + (*s - '0');
++s;
}
return (sign *res);
}
