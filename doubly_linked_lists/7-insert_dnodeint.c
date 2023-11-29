#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *instert_dnodeint_at_index - inserts a node at index
 *@h: pointer to the list
 *@idx: where to insert
 *@n: Element to be added
 *Return: Adress of the new elemnt
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *current;
unsigned int i;

if (h == NULL)
return (NULL);

new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;

if (*h == NULL && idx == 0)
{
new_node->prev = NULL;
new_node->next = NULL;
*h = new_node;
}
else
{
current = *h;
for (i = 0; i < idx && current != NULL; i++)
current = current->next;

if (i < idx && current != NULL)
{
free(new_node);
return (NULL);

new_node->next = current;
new_node->prev = current->prev;
if (current->prev != NULL)
current->prev->next = new_node;
else
*h = new_node;
current->prev = new_node;
}
}
else
{
current = *h;
while (current->next != NULL)
current = current->next;
new_node->prev = current;
new_node->next = NULL;
current->next = new_node;
}

return (new_node);
}
