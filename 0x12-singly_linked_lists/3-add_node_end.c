#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**

add_node_end - adds a new node at the end of a list_t list
@head: double pointer to head of list
@str: string to be duplicated and added to new node
Return: address of new element or NULL if it fails
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node;
list_t *current;

new_node = malloc(sizeof(list_t));

if (new_node == NULL)
return (NULL);

new_node->str = strdup(str);

new_node->len = strlen(str);
new_node->next = NULL;

if (*head == NULL)
*head = new_node;
else
{
current = *head;
while (current->next != NULL)
current = current->next;
current->next = new_node;
}

return (new_node);
}
