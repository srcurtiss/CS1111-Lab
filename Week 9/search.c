/*
 *This program searches for a key in sorted array using binary search. If the key exists, return the index that contains the key, otherwise return -1.
 *
 *@authors Luke Johnson, Shealyn Curtis, Isabella Hasaj, Derek Gehring
 *@email lukej@mtu.edu dtgehrin@mtu.edu ihasaj@mtu.edu srcurtis@mtu.edu
 *@date 10/25/2024
 */



#include <stdio.h>

int search(int data[], int size, int key) {
        int mid;
        int left = 0;
        int right = size-1;

        while (left <= right) {
                mid = (left + right)/2 ;
                if ( key == data[mid] ) {
                        return mid;
                } else if (key > data[mid] ) {
                        //set the search range to be [mid+1..right]
                        left = mid + 1;
                } else {
                        //set the search range to be {left..mid-1]
                        right = mid - 1;
                }
                }
                return -1;
        }

int main() {
        int data []={2,3,4,6,7,8,9,10};
        int size = 8;
        int x [] = {3,5,7,9};
        int i;
        for (i=0;i<4;i++) {
                int key = x[i];
                int result = search(data, size, key);
                printf("%d ",result);}
        printf("\n");
        return 0;
}
