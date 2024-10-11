/*
 *This program print all the values in an array
 *
 *@authors Luke Johnson, Shealyn Curtis, Isabella Hasaj, Derek Gehring
 *@email lukej@mtu.edu dtgehrin@mtu.edu ihasaj@mtu.edu srcurtis@mtu.edu
 *@date 10/11/2024
 */

#include <stdio.h>
//Main function
int main() {
//Initialize the sum variable, i for the for loop, and declare array
int sum=0;
int i;
int data[]={ 1, 3, 5, 4, 7, 2, 99, 16, 45, 67, 89, 45};
//Run for loop to add each elecment of the variable to the sum
	for(i=0; i<12; i++){
	sum = sum+data[i];
	}
//Print the value of the sum
printf("%d \n",sum);
}

