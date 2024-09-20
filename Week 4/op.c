/* 
 * CS1111 Week 4 Lab: code that will print the name of the operation inputed
 *@authors:Bella Hasaj,Derek, Shea Curtis, Luke Johnson
 *@emails:ihasaj@mtu.edu, dtgehrin@mtu.edu,srcurtis@mtu.edu, lukej@mtu.edu
 * date: 9/20/2024
 *
 */

    #include <stdio.h>

 int main()
 {
    char operation; //identify that a operation will be the input

 // Ask for and read user input
    printf("Please enter an op: ");    
    scanf("%c",&operation); //reads user input and defines varriable

 // Identify what operation the charcter represents and give reasonable output
    switch (operation)
{
	case '+': 
	{
	 printf("Addition. \n");
	 break;
	}

	 case '-' : 
        {
         printf("Subtraction. \n");
         break;
        }

	 case '*': 
        {
         printf("Multiplication. \n");
         break;
        }

	 case '/' : 
        {
         printf("Division. \n");
         break;
        }

	 case '%' : 
        {
         printf("Modulo. \n");
         break;
        }

	 case '>' : 
        {
         printf("Greater Than. \n");
         break;
        }

         case '<':
        {
         printf("Less Than. \n");
         break;
        }
         case '!':
        {
         printf("Not \n");
         break;
        }
	default:
	{
	 printf("Unknown.\n"); // prints unknown if none of the other cases are 	true
	break;
	}
}

    return 0;
}
