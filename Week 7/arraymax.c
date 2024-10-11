/*
 * Program that returns the maximum value in the listed arrays
 *
 *@authors Luke Johnson, Shealyn Curtis, Isabella Hasaj, Derek Gehring
 *@email lukej@mtu.edu dtgehrin@mtu.edu ihasaj@mtu.edu srcurtis@mtu.edu
 *@date 10/11/2024
 */

//Prototype of maxValue

#include <stdio.h>

int maxValue(int a[],int b);

//Delcare integers in each array
	
int main()
{
    	int a[6]={1,4,5,10,8,9};
    	int b[8]={4,5,60,5,1,100,8,10};

//Call maxValue and print it for array a

    	printf("max in array a is %d \n", maxValue(a, 6));

//Call maxValue and print it for array b.

	printf("max in array b is %d \n", maxValue(b, 8));

//TODO3: implementation of maxValue
}
int maxValue(int a[],int b){
int max=a[0];

for (int i=0;i<b;i++)
{ 
	if(a[i]>max)
		max=a[i];
}
return max;
}
