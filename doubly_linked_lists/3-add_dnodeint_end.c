#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *add_dnodeint_end - Adds a new node at the beginning of a dlist
 *@head: pointer to the list
 *@n: Element to be added
 *Return: Adress of the new elemnt
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
  dlistint_t *new_node, *current;

if (head == NULL)
return (NULL);

new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->next = NULL;

if (*head == NULL)
{
new_node->prev = NULL;
*head = new_node;
}
else
{
current = *head;
while (current->next != NULL)
current = current->next;
new_node->prev = current;
current->next = new_node;
}
return (new_node);
}
