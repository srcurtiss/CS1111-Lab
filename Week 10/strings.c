/*
 *This program sorts a given list of words alphabetically
 *
 *@authors Luke Johnson, Shealyn Curtis, Isabella Hasaj, Derek Gehring
 *@email lukej@mtu.edu dtgehrin@mtu.edu ihasaj@mtu.edu srcurtis@mtu.edu
 *@date 11/01/2024
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void bubblesort(char **array, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1; j++) {
            // Compare two strings using strcmp
            if (strncmp(array[j], array[j + 1], 20) > 0) {
                // Swap the strings
                char *temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;}
	}
    }
}

int main()
{

    char *buffer = malloc(1024);

    int nameCount;
    scanf("%d\n", &nameCount);
    char **nameList = malloc(sizeof(char*) * nameCount);
    if(!nameList)
    {
        printf("Failed to allocate!\n");
        return -1;
    }

    // Read in each name
    for(int i = 0; i < nameCount; i++)
    {
        fgets(buffer, 1024, stdin);
        buffer[strnlen(buffer, 1024) - 1] = 0;
        nameList[i] = malloc(strnlen(buffer, 1024) + 1);

        if(!nameList[i])
        {
           printf("Failed to allocate!\n");
            return -1;
        }

        strncpy(nameList[i], buffer, strnlen(buffer, 1024) + 1);
    }
printf("test\n");
bubblesort(nameList,nameCount);

    for(int i = 0; i < nameCount; i++)
    {
        printf("%s\n", nameList[i]);
   }

    return 0;
}
