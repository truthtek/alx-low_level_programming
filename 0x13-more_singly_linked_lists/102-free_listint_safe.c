#include "lists.h"

size_t free_listint_safe(listint_t **head)
{
    listint_t *fast, *slow, *temp;
    size_t count = 0;

    if (head == NULL || *head == NULL)
        return (0);

    slow = *head;
    fast = (*head)->next;

    while (fast != NULL && fast->next != NULL && slow != fast)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    if (slow == fast)
    {
        *head = NULL;
        return (0);
    }

    while (*head != NULL)
    {
        temp = *head;
        *head = (*head)->next;
        free(temp);
        count++;
    }

    *head = NULL;
    return (count);
}
