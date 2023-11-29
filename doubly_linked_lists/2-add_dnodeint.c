#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *add_dnodeint - Adds a new node at the beginning of a dlist
 *@head: pointer to the list
 *@n: Element to be added
 *Return: Adress of the new elemnt
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node;

if (head == NULL)
return NULL;

new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return NULL;

new_node->n = n;
new_node->prev = NULL;
new_node->next = *head;
if (*head != NULL)
(*head)->prev = new_node;

*head = new_node;

return (new_node);
}
