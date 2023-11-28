/**
 *_strlen - meassures the lenght of a string
 *@s: string to be measured
 *Return: lenght of the string
 */

int _strlen(char *s)
{
const char *str = s;
while (*str)
{
++str;
}
return (str - s);
}
