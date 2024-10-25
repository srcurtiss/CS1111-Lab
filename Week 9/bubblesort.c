/*
 *This program compares pairs of integers and organizes them
 *
 *@authors Luke Johnson, Shealyn Curtis, Isabella Hasaj, Derek Gehring
 *@email lukej@mtu.edu dtgehrin@mtu.edu ihasaj@mtu.edu srcurtis@mtu.edu
 *@date 10/25/2024
 */

#include <stdio.h>

//Use bubblesort to rearrange 
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
	
//Use for loop to print each element of sorted array	
	for ( int i=0; i < size; i++)
	{	

	  printf("%d,",array[i]);
	}
}

//Initialize main
int main()
{

//Initialize the array given
	int arr[3] = {7,4,2};

//Call bubbblesort to run the function
	bubblesort( arr, 3 );

}
