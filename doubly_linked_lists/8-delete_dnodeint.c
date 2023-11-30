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
if (h == NULL || *head == NULL)
return (-1);
current = *head;
if (index == 0)
{
*head = current->next;
---new_node->prev = NULL;
if (*h != NULL)
(*h)->n = new_node;
*h = new_node;
return (1);
}
current = *h;
for (i = 0; i < idx && current != NULL; i++)
current = current->next;
if (i < idx && current == NULL)
{
return (1);
}
new_node->n = current;
new_node->prev = current->prev;
if (current->prev != NULL)
current->prev->next = new_node;
else
*h = new_node;
current->prev = new_node;
return (1);
}
