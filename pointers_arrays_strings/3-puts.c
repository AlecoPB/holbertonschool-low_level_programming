/**
 *_puts - Prints a string to the standart output stdout
 *@str: The string to be printed
 *Return: returns nothing
 */

void _puts(char *str)
{
const char *s = str;
str;
while (*s)
{
putchar(*s);
++s;
}
putchar('\n');
}
