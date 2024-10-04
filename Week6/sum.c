/*
 * Program that calculates the sum of the numbers leading up to the one entered 
 *
 *@authors Luke Johnson, Shea Curtis, Isabella Hasaj, Derek Gehring
 *@email lukej@mtu.edu dtgehrin@mtu.edu ihasaj@mtu.edu srcurtis@mtu.edu
 * @date 10/4/2024
 */

#include<stdio.h>

//Initialize variables
int main()
{
	int integer;
	int sum=0;

//Ask user to enter a positive value

	printf("Please enter a positive integer:");
	scanf("%d",&integer);

//Calculate the sum of the numbers

	for (int i=1; i<=integer; i++)
	{
		sum=sum+i;
		printf("%d",i);		//Print all values in equation
		
	if (integer>i)	
		printf("+");		//Print "+" in equation
	}

//Print the final answer
	printf("=%d\n",sum);

}

