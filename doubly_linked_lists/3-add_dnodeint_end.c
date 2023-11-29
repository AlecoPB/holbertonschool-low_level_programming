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
dlistint_t *start_node = *head;

if (head == NULL)
return (NULL);

*head = malloc(sizeof(dlistint_t));
if (*head == NULL)
return (NULL);

while (*head)
*head = *head->next;
 
*head->n = n;
new_node->next = *NULL;

return (*head);
}
