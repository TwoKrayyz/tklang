#include <stdio.h>

void read_tkl_file(char name[], char action[]);

int main(void)
{
    read_tkl_file("root.tkl", "r");

    return 0;
}

void read_tkl_file(char name[], char action[])
{
    FILE* fptr;

    printf("Searching...");

    fptr = fopen(name, action);

    if (fptr != NULL)
    {
        printf("tkl File Found...");
        printf("tkl File Opened!\n\n");
        printf("Getting tkl File's Contents! ");
    
        char tkldata[100];
    
        fgets(tkldata, 100, fptr);

        printf("tkl File's Contents:\n\n");
        printf("%s\n\n", tkldata);

        fclose(fptr);
        printf("tkl File Closed!\n");
    }
    else
    {
        printf("tkl File Has Not Been Found!\n");
    }
}