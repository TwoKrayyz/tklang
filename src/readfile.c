#include <stdio.h>

char *readfile(char name[], char action[])
{
    FILE *fptr;

    fptr = fopen(name, action);

    if (fptr != NULL)
    {
        static char buffer[100];

        fgets(buffer, 100, fptr);

        return buffer;
    }
    else
    {
        printf("File not found!");
    }

    fclose(fptr);
}