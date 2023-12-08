#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at a given position.
 * @head: Pointer to a pointer to the head of the doubly linked list.
 * @index: Index of the node to be deleted (starts at 0).
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *temp, *to_delete;
unsigned int count = 0;
if (head == NULL || *head == NULL)
return (-1);
if (index == 0)
{
to_delete = *head;
*head = (*head)->next;
if (*head != NULL)
(*head)->prev = NULL;
free(to_delete);
return (1);
}
temp = *head;
while (temp != NULL && count < index - 1)
{
temp = temp->next;
count++;
}
if (temp == NULL || temp->next == NULL)
return (-1);
to_delete = temp->next;
temp->next = to_delete->next;
if (to_delete->next != NULL)
to_delete->next->prev = temp;
free(to_delete);
return (1);
}
