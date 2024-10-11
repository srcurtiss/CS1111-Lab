/*
 *This program will take an array of 3 integers and ouput the max integer
 *
 *@authors Luke Johnson, Shealyn Curtis, Isabella Hasaj, Derek Gehring
 *@email lukej@mtu.edu dtgehrin@mtu.edu ihasaj@mtu.edu srcurtis@mtu.edu
 *@date 10/11/2024
 */
    #include <stdio.h>

  // Creating the function
  int max(int myArray[]){  //giving the function a name and saying it has 3 inputs

        int maxnum=0; // declaring a vriable max 

        for (int i=0;i<3;i++){
           if (maxnum<myArray[i]){ //for each number in the array if it's greater than the max you redefine max as that integer 
             maxnum=myArray[i];
           }
        }
        return maxnum;
   }

// Main code
  int main()
  {  
   // User input 
   int myArray[3];
   printf("Please input an array of 3 integers: ");
   scanf("%d %d %d",&myArray[0], &myArray[1],&myArray[2]); // define array

// Calling the funciton 
   int  num= max(myArray);

   // User Output
   printf("%d \n",num);
   return 0;
   }

~        
