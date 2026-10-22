#include <stdio.h>
#include "readfile.h"

void lexer(char string[]);

int main(void)
{
    char *string = readfile("root.tkl", "r");

    lexer(string);

    return 0;
}

void lexer(char string[])
{
    printf("%s\n", string);
}