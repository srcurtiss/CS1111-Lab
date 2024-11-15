/*
 * Implementation of indexOfLinkedList
 *
 *@authors Luke Johnson, Shealyn Curtis, Isabella Hasaj, Derek Gehring
 *@email lukej@mtu.edu dtgehrin@mtu.edu ihasaj@mtu.edu srcurtis@mtu.edu
 *
 * @date 11/15/2024
 */

#include "linkedlist.h"
#include <stdio.h>

/*
 * Gets the index of a value.
 *
 * @param head: The first node of the list.
 * @param value: The value to search for.
 *
 * @return the index found, or -1 on failure.
 */

int indexOfLinkedList(Node *head, int value)
{
    int index = 0; // sets the index at  the beginning of the list
    Node *current = head;// defines a new pointer to the head of the node

    while (current != NULL)  // while there are still values in the list  
    {
        if (current->value == value)// checks to see if the current value matches the value we're looking for
        {
             return index; // if true return the index # that the value was found at
        }
        current = current->next;// if not true move to the next number in the list
        index++; // moving to next index so add 1 to current index #
   }

    return -1; // Value not found or list empty
}
~             
