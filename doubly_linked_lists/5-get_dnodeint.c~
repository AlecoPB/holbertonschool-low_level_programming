#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *free_dlistint - Frees a dlist (Empties it)
 *@head: pointer to the list
 *Return: None
 */

void free_dlistint(dlistint_t *head)
{
dlistint_t *temp;

while(head != NULL)
{
temp = head;
head = head->next;
free(temp);
}
}
