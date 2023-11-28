#include <stdio.h>
/**
 *_strcpy - Copies a string to another
 *@dest: string to be copied to
 *@src: source string
 *Return: returns a pointer to the original start of dest
 */

char *_strcpy(char *dest, char *src)
{
char *original_dest = dest;
while (*src)
{
*dest = *src;
++src;
++dest;
}
*dest = *src;
return original_dest;
}
