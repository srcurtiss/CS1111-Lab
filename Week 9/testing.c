/*
 *testing.c
 *
 *@authors Luke Johnson, Shealyn Curtis, Isabella Hasaj, Derek Gehring
 *@email lukej@mtu.edu dtgehrin@mtu.edu ihasaj@mtu.edu srcurtis@mtu.edu
 *@date 10/25/2024
 */
#include <stdio.h>
#include <stdlib.h>

void bubblesort( int array[], int size )
{
	for ( int i = 0; i < size - 1; i++ )
	{
        for ( int j = 0; j < size - 1; j++ )
	{
                if ( array[j]>array[j+1] )
		{
			int arrayTemporary = array[j];
        		array[j] = array[j + 1];
        		array[j + 1] = arrayTemporary;
		}
	}	
	}
}	

int main()
{
    // When testing, setting a smaller size will let it run faster.
    int size = 100000;
    // Dynamically allocate array - this isn't fitting on the stack
    int *array = malloc(size * sizeof(int));

    // Scan input.
    for(int i = 0; i < size; i++)
    {
        scanf("%d", array + i);
    }

    // UPDATE THIS LINE
    bubblesort(array,size);

    // Print output
    for(int i = 0; i < size; i++)
    {
        printf("%d\n", array[i]);
    }

    // Free our dynamically allocated array.
    free(array);
    
    return 0;
}
