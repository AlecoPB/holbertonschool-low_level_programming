#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *get_dnodeint_at_index - Gives you the value stored in an index
 *@head: pointer to the list
 *@index: index to recover the value from
 *Return: value recovered
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i;

for (i = 0; i < index; i++)
{
if (head == NULL)
{
return (NULL);
}
head = head->next;
}

return (head);
}
