/*                                                                            *This program starts at index 0, and will select the next value in the array and place it in the correct location in the “sorted” portion of the array
 *
 *@authors Luke Johnson, Shealyn Curtis, Isabella Hasaj, Derek Gehring
 *@email lukej@mtu.edu dtgehrin@mtu.edu ihasaj@mtu.edu srcurtis@mtu.edu
 *@date 10/25/2024
 */


 #include <stdio.h>

 //Creating the function
void insertionSort(int array[], int size){

    // Declare Variables
    int key;
    int j;

    // For loop to sort data
    for(int i = 1;i<size; ++i){
         key =array[i]; //assigns key to the current number in the array
         j= i-1;
        // while loop will check to see if the number before the current number is greater than it and adjust the placement of that number if not
        while (j>=0 && array[j] > key){
        array[j+1]= array[j]; // if the number before key is greater then the code it will assign key to the position before j
          j= j-1;// will continue going through the different values and spots until key is in the correct position
          }
        array[j+1]=key;//now renames key to the next variable in the array
    }
 }

 int main()
 {

// input
    int myArray[] = { 7, 4, 2, 9 };
    int sizearr = sizeof(myArray)/ sizeof(myArray[0]);//determines the size of the array
// Calling the function
  insertionSort(myArray,sizearr);

//User Output
  int n;
  for (n=0;n<sizearr;n++){
        printf("%d\n",myArray[n]);
  }
return 0;
}
