/*
 * Program that calculates how long until the user's money is doubled
 *
 * @authors Shea Curtis, Luke Johnson, Bella Hasaj, Derek Gehring
 * @emails srcurtis@mtu.edu, lukej@mtu.edu, ihasaj@mtu.edu, dtgehrin@mtu.edu
 * @date 9/20/2024
 *
 */

#include <stdio.h>

//Initialize variables
int main()
{
	int returnRate;
	double ratePercent;
	double factor;
	double money;
	int timeToDouble;

//Ask user to enter yearly return rate

	printf("What is the yearly return rate in percentage?");
	scanf("%d",&returnRate);

//Calculate time needed to double the user's money

	ratePercent=(double)returnRate/100;
	money=1;
	
	while (money<2)
	{
		money+=ratePercent*money;
		timeToDouble++;
	}

//Tell user how long it will take to double
	
		printf("With the return rate of %d.00%, it will take %d years to double my money.\n", returnRate, timeToDouble);

}

