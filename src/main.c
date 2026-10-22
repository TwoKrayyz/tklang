#include <stdio.h>

char *read_tkl_file(char name[], char action[]);
void lexer(char string[]);

int main(void)
{
    char *string = read_tkl_file("root.tkl", "r");

    lexer(string);

    return 0;
}

char *read_tkl_file(char name[], char action[])
{
    FILE *fptr;

    fptr = fopen(name, action);

    if (fptr != NULL)
    {
        static char tkldata[100];
    
        fgets(tkldata, 100, fptr);

        return tkldata;
    }
    else
    {
        printf("tkl File Has Not Been Found!\n");
    }

    fclose(fptr);
}

void lexer(char string[])
{
    printf("%s\n", string);
}