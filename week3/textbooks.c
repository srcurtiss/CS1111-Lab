/*
 *
 * CS1111 Lab Week 3
 *
 * @author Derek Gehring
 * @email dtgehrin@mtu.edu
 * @date 9/13/2024
 *
 */

#include <stdio.h>

int main() {
	int operand1;

	//Prompt user for input
	printf("How many textbooks did you buy this semester? ");

	//Read user integer input
	scanf("%d",&operand1);

	//Output statement assigned to specific  number range
	if (operand1<0) 
		printf("That's not an option.");
	if (operand1==0) 
	printf("You got away cheap!");
	if (operand1==1)
       	printf("That's a normal amount to pay for.");
	if (operand1==2) printf("That's a normal amount to pay for.");
	if (operand1==3) 
	printf("That's a normal amount to pay for.");
	if (operand1>3) 
	printf("That's pretty expensive!");

	return 0;
}

