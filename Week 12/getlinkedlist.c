/*
 * Implementation of getLinkedList
 *
 * @author: Luke Johnson, Shealyn Curtis, Isabella Hasaj, Derek Gehring
 * @email: lukej@mtu.edu dtgehrin@mtu.edu ihasaj@mtu.edu srcurtis@mtu.edu
 *
 * @date 11/15/2024
 */

#include "linkedlist.h"
#include <stdio.h>

int getLinkedList(Node *head, int index, int *out)
{
        if (head == NULL || index<0)
        {
            return -1;//Empty list or invalid index, return -1 as failure.
        }

        Node *current = head;

        for (int i=0; i<index; i++)
        {
             if (current == NULL)
             {
                  return -1; //Index out of bounds, return -1 as failure.
             }
             current = current->next;
        }
        if (current == NULL)
        {
             return -1; //Index out of bounds, return -1 as failure. 
        }
        *out = current->value;
        return 0;//Return 0 on success
}
