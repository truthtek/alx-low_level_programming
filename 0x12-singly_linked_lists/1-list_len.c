#include "lists.h"

/**

list_len - returns the number of elements in a linked list
@h: pointer to head of the list
Return: number of elements
*/
size_t list_len(const list_t *h)
{
int len = 0;
const list_t *current = h;
while(current != NULL)
{
len++;
current = current->next;
}
return (len);
}
