/*
 *
 * CS1111 Lab Week 3
 *
 * @author Shea Curtis, Luke Johnson
 * @email srcurtis@mtu.edu, lukej@mtu.edu
 * @date 9/13/2024
 *
 */

#include <stdio.h>
// Initialize varibles
int main()
{
	double pressure;
	double lakeDepth;
		printf("How deep is the lake (in meters)?");
	scanf("%lf",&lakeDepth);

// Create an if statement for the depth of the lake
	if(lakeDepth<12)
	{
		printf("You can probably dive in it as a beginner.\n");

	}
	else
	{
		if(lakeDepth<30)
	{
		 printf("You can probably dive in it if you are a trained professional.\n");
	}
		else
		{ printf("You may want to make preparations before diving.\n");
}
// Calculate and display pressure for the depth		
}
 pressure=(1000*9.8*lakeDepth)/1000;
 printf("The pressure at the deepest point is %.1lf kPa.\n", pressure);
}

