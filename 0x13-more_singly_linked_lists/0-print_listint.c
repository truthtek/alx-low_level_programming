#include "my_linked_list.h" // Assuming "my_linked_list.h" is your own header file.

/**
 * display_linked_list - displays all the elements of a custom linked list
 * @head: pointer to the head of the list
 *
 * Returns: the count of nodes in the list
 */
size_t display_linked_list(const my_node_t *head)
{
    const my_node_t *current_node = head;
    size_t node_count = 0;

    while (current_node != NULL)
    {
        printf("%d\n", current_node->data);
        node_count += 1;
        current_node = current_node->next;
    }

    return (node_count);
}
