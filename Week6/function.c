/*
 *This program prints stars and uses another function to be called into the main function!
 *
 *@authors Luke Johnson, Shealyn Curtis, Isabella Hasaj, Derek Gehring
 *@email lukej@mtu.edu dtgehrin@mtu.edu ihasaj@mtu.edu srcurtis@mtu.edu
 *@date 10/4/2024
 */

#include <stdio.h>
//Void function to be called
void star(int i){
        int y;
        //Iterations
        for (y=0;y<i;y++){
                        //Print number of stars according to iteration count
                        printf("*");}

}
int main()

{
        int x;

        //Prompt user for input
        printf("Please enter a position: ");
        scanf("%d", &x);
        //Iterations for new lines
        for (int i = 1; i <= x; i++){
                star(i);//Call function in void
        printf("\n");//Next line
        }
        return 0;
        }

