/**
 *swap_int - swaps the value stored in two pointers
 *@a: first value to be swaped
 *@b: second value to be swaped
 *Return: returns nothing
 */

void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}
