#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *dlistint_t *instert_dnodeint_at_index - inserts a node at index
 *@idx: where to insert
 *@n: Element to be added
 *Return: Adress of the new elemnt
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *current;
unsigned int i;

if (head == NULL)
return (NULL);

new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;

if (*head == NULL && idx == 0)
{
new_node->prev = NULL;
new_node->next = NULL;
*head = new_node;
}
else
{
current = *head;
for (i = 0; i < index && current != NULL; i++)

current = current->next;
 if (i < idx && current == NULL)
{
free(new_node);
return (NULL);
}

new_node->prev = current->prev;
new_node->next = current;
if (current->prev != NULL)
current->prev->next = new_node;
else
*head = new_node;
current->prev = new_node;
}
return (new_node);
}
