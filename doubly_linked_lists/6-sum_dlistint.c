#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *sum_dlistint - gives you the sum of every member of a list
 *@head: pointer to the list
 *Return: value recovered
 */

int sum_dlistint(dlistint_t *head)
{
int sum = 0;

if (head == NULL)
return 0;

while (head != NULL)
{
sum += head;
head = head->next;
}

return (sum);
}
