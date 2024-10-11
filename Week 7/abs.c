/*
 * Program that returns absolute value of number 
 *
 *@authors Luke Johnson, Shea Curtis, Isabella Hasaj, Derek Gehring
 *@email lukej@mtu.edu dtgehrin@mtu.edu ihasaj@mtu.edu srcurtis@mtu.edu
 * @date 10/14/2024
 */

#include <stdio.h>

//Function to return the absolute value of a double
double myabs(double data){
        if (data<0) {
                return  -1*data;
        }
}

int main() {
        double data;

        printf("Enter a number: ");
        scanf("%lf", &data);//Read user input and store it as "data"

        //Test myabs with a negative value
        double answer = myabs(data);
        printf("abs(%f)=%.2f\n",data,answer);

        return 0;
}
