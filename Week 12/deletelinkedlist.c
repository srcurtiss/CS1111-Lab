/*
 * Implementation of deleteLinkedList
 *
 * @author Luke Johnson, Shealyn Curtis, Isabella Hasaj, Derek Gehring
 * @email lukej@mtu.edu dtgehrin@mtu.edu ihasaj@mtu.edu srcurtis@mtu.edu
 *
 * @date 11/15/2024
 */

#include "linkedlist.h"
#include "stdlib.h"

/*
 * Deletes the node at index from the linked list.
 *
 * @param head: memory address of pointer to first node in the list.
 *              This will be updated to point at the new head if it changes
 *              such as when deleting index 0.
 * @param index: The index to remove from the list.
 *
 * @return 0 on success, -1 on failure.
 */
int deleteLinkedList(Node **head, int index)
    {
    if (*head == NULL || index < 0)
    {
        return -1; // Empty list or invalid index
    }

    Node *current = *head;
    if (index == 0)
    {
        *head = current->next; // Update head of list if node is removed
        free(current);
        return 0;
    }

    Node *prev = NULL;
    for (int i = 0; i < index; i++)
    {
        if (current == NULL)
    {
            return -1; // Return false when index is out of bounds
    }
    prev = current;
    current = current->next;
    }

    if (current == NULL)
    {
            return -1; //Return false when index is out of bounds
    }

    prev->next = current->next;
    free(current);
    return 0;
    }
