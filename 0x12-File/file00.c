#include <stdio.h>
#include <stdlib.h>

/**
 * Program that open a file and write to it
*/

int main(void)
{
    FILE *fptr; /* Declaring a variable of type FILE*/

    fptr = fopen("hardy.txt", "w"); /* Initializing the variable fptr with file opened*/

    if(fptr == NULL) /* Checking if the file opened exist*/
    {
        printf("File doesn't exist\n");
        exit(98);
    }

    fputs("I love coding", fptr);

    fclose(fptr);

    return (0);
}
