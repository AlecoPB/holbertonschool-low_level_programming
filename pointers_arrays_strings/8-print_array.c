#include <stdio.h>
/**
 *print_array - Prints n numbers from an array
 *@a: the array to be printed
 *@n: number of members to be printed
 *Return: returns nothing
 */

void print_array(int *a, int n)
{
const int *arr = a;
for (int *i = a; i < sizeof(int) * n; i += sizeof(int))
{
printf("%d, ", arr + i);
}
}
