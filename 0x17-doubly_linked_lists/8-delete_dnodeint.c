#include "lists.h"

/**
 * delete_dnodeint_at_index - Delete a node at a given index in a doubly-linked list.
 * @head: Pointer to a pointer to the head of the list.
 * @index: The index of the node to be deleted.
 * Return: 1 if deletion succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    if (*head == NULL) {
        return -1; // Empty list, deletion is not possible.
    }

    if (index == 0) {
        // If index is 0, delete the first node and update the head pointer.
        dlistint_t *temp = *head;
        *head = (*head)->next;
        if (*head != NULL) {
            (*head)->prev = NULL;
        }
        free(temp);
        return 1; // Deletion succeeded.
    }

    unsigned int count = 0;
    dlistint_t *current = *head;

    while (current != NULL) {
        if (count == index) {
            // Update the prev and next pointers of adjacent nodes.
            if (current->prev != NULL) {
                current->prev->next = current->next;
            }
            if (current->next != NULL) {
                current->next->prev = current->prev;
            }
            free(current);
            return 1; // Deletion succeeded.
        }
        current = current->next;
        count++;
    }

    return -1; // Index is out of range.
}
