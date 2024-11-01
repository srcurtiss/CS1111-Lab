/*
 *This program uses pointers to swap variable numbers
 *
 *@authors Luke Johnson, Shealyn Curtis, Isabella Hasaj, Derek Gehring
 *@email lukej@mtu.edu dtgehrin@mtu.edu ihasaj@mtu.edu srcurtis@mtu.edu
 *@date 11/1/2024
 */

#include <stdio.h>

// Function to swap the values of two integers
void swap(int *x, int *y)
{
    int data  = *x;//Sets data to the value pointed at x
    *x = *y;//Sets the value pointed at x to be the value pointed at y
    *y = data;//Sets the value pointed at y to be the value of data
}

int main()
{
        //Intialize variables
    int a;
    int b;
        //Set variables
    a = 1;
    b = 2;

    // Call the swap function
    swap(&a, &b);

    printf("a = %d, b = %d\n", a, b);

    return 0;
}
~         
