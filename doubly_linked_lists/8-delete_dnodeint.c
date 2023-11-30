#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *delete_dnodeint_at_index - deletes the node located at index
 *@head: pointer to the list
 *@index: where to insert
 *Return: 1 if succeded, -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current;
unsigned int i;
if (head == NULL || *head == NULL)
return (-1);
current = *head;
if (index == 0)
{
*head = current->next;
if (current->next != NULL)
current->next->prev = NULL;
free(current);
return (1);
}

for (i = 0; i < index && current != NULL; i++)
current = current->next;

if (i < index && current == NULL)
return (-1);

if (current->next != NULL)
current->prev = current->prev;

if (current->prev != NULL)
current->prev->next = current->next;

free(current);
return (1);
}
