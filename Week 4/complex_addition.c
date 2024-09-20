/*
 *This program takes two numbers and without using multiplication or division, it finds the product and the quotient
 *
 *@authors Luke Johnson, Shealyn Curtis, Isabella Hasaj, Derek Gehring
 *@email lukej@mtu.edu dtgehrin@mtu.edu ihasaj@mtu.edu srcurtis@mtu.edu
 *@date 9/20/2024
 */

#include <stdio.h>

int main(){

	int n1;//first number
	int n2;//second number
	int m=0;//product
	int d;//quotient
	int c1=0;//counter for multiplication
	int r;//remander for division
	

	printf("Enter two numbers: ");
	scanf("%d %d", &n1, &n2);

	printf("%d %d \n", n1, n2);

		//Math, n * a = a+a+a+a+a....+a
	
	while(c1<n2){//Runs loop until counter is equal to the number of times we add n1 
	m=m+n1;//Uses addtition to find product
	
	c1=c1+1;//Counter 
	}
		//Division
	r=n1;
	while(r>n2){
	r=r-n2;//Uses subtraction on the remander every loop
		
	d=d+1;//This counter is what the quotient is
	}

	printf("%d*%d:%d \n", n1, n2, m);
	printf("%d/%d:%d \n", n1, n2, d); //Prints the operands, operator, and outputs


	return 0;
}
