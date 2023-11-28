#include <stdio.h>
/**
 *print_array - Prints n numbers from an array
 *@a: the array to be printed
 *@n: number of members to be printed
 *Return: returns nothing
 */

void print_array(int *a, int n)
{
int *i;
int *arr = a + n;
for (i = a; i < arr; ++i)
{
printf("%d", *i);
if (i < arr - 1)
{
printf(", ");
}
}
}
