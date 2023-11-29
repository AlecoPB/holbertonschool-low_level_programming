#include <stdio.h>
#include "lists.h"

/**
 *print_dlistint - prints the elements of a dlist
 *@h: pointer to the list
 *Return: number of nodes
 */

size_t print_dlistint(dlistint_t *h)
{
size_t nodes = 0;
while (h)
{
printf("%d\n", h->n);
h = h->next;
nodes++;
}
return nodes;
}
