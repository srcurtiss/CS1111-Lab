/*
 *This program prints stars starting at 1 and then 2 and so on
 *
 *@authors Luke Johnson, Shealyn Curtis, Isabella Hasaj, Derek Gehring
 *@email lukej@mtu.edu dtgehrin@mtu.edu ihasaj@mtu.edu srcurtis@mtu.edu
 *@date 10/4/2024
 */

#include <stdio.h>

int main()

{
        //Create variables
        int x;
        int y;
        int i;

        //Interations for each line
        printf("Please enter a position: ");
        scanf("%d", &x);
        for ( i = 1; i <= x; i++){
                //Printing amount of stars as the iteration value
                for (y=0;y<i;y++){

                        printf("*");}
        printf("\n");//Next line
        }
        return 0;
        }

