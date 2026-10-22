#include <stdio.h>

char *read_tkl_file(char name[], char action[]);
void lexer(void);

int main(void)
{
    char *string = read_tkl_file("root.tkl", "r");

    printf("%s\n", string);

    lexer();

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

        fclose(fptr);

        return tkldata;
    }
    else
    {
        printf("tkl File Has Not Been Found!\n");
    }
}

void lexer(void)
{
    printf("Lexer Here!\n");

    /*
        I will add its features tomorrow !
    */
}