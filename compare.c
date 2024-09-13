 /*
 * CS1111 Lab Week 3 
 *
 *  @author Isabella Hasaj
 *   ihasaj@mtu.edu
 *   @ date 09/13/2024
 *
 */
  #include <stdio.h>	
  int main(){
   
  int num1;
  int num2;

// Asking and Reading input
   printf("Please enter 2 numbers ");
   scanf("%d %d", &num1, &num2);

	// Outputs based on Comparisons
   if (num1==num2)
	{  
	 printf("Are the numbers equal? Yes\n");
	 printf("Are the numbers not equal? No\n");
	}
   else
	{ 
	 printf("Are the numbers equal? No\n");
	 printf("Are the numbers not equal? Yes\n");
	}
   if (num1<num2)
	{
	 printf("Is the first number less than the second? Yes\n");
	 printf("Is the first number greater than the second?  No\n");
	}	
   else if(num1==num2)
	{
         printf( "Is the first number less than second? No\n");
         printf("Is the first number greater than the second? No\n");
        }
   else
	{
	 printf( "Is the first number less than second? No\n");
	 printf("Is the first number greater than the second? Yes\n");
	}
	//Outputs for the question about greater than or equal too there because three posible outputs
   if (num1<num2 && num1!=num2)
	{
	 printf("Is the first number less than or equal to the second? Yes\n");
	 printf("Is the first number greater than or equal to the second? No\n");
	}  
   else if (num1==num2)  
	{
	 printf("Is the first number less than or equal to the second? Yes\n");
	 printf("Is the first number greater than or equal to the second? Yes\n");
	}
   else
	{
	 printf("Is the first number less than or equal to the second? No\n");
	 printf("Is the first number greater than or equal to the second? Yes\n");
	}
   return(0);
}
