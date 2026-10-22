#include <stdio.h>
#include <string.h>

void scanner(char string[])
{
    char operators[] = {'=', '+', '-', '*', '/', '%'};

    char tokens[10] = {};

    for (int i = 0; i < strlen(string); i++)
    {
        tokens[i] = string[i];

        printf("%s\n", tokens);
    }
}

/*
    I know this isn't good.
*/