/*
 *This program allows the value within a pointer to increment by 1
 *
 *@authors Luke Johnson, Shealyn Curtis, Isabella Hasaj, Derek Gehring
 *@email lukej@mtu.edu dtgehrin@mtu.edu ihasaj@mtu.edu srcurtis@mtu.edu
 *@date 11/1/2024
 */

#include <stdio.h>

int main()
{
    	int num = 5;
    	double rate = 5.4;
	char letter = 'B';

//Declare pointers numP, rateP, and letterP
	int *numP;
	double *rateP;
	char *letterP;

//Assign pointers to variables
   	numP=&num;
    	rateP=&rate;
	letterP=&letter;

//Use expression with each pointer to increase the content which they
// point by 1. 
	++(*numP);
 	++(*rateP);
	++(*letterP);

//Print the content of each pointer and the content that its pointed by
	printf("%p\n", &numP); //Print for numP
	printf("%d\n", *numP);

	printf("%p\n", &rateP); //Print for rateP
	printf("%lf\n", *rateP);

	printf("%p\n", &letterP); //Print for letterP
	printf("%c\n", *letterP);

}
