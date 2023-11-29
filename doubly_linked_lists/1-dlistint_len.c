#include <stdio.h>
#include "lists.h"

/**
 *dlistint_len - gives the lenght of a dlist
 *@h: pointer to the list
 *Return: lenght of dlist
 */

size_t dlistint_len(const dlistint_t *h)
{
size_t nodes = 0;
while (h)
{
h = h->next;
nodes++;
}
return (nodes);
}
