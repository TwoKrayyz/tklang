#include <stdio.h>

#include "includes/readfile.h"
#include "includes/lexer.h"

int main(void)
{
    char *string = readfile("root.tkl", "r");

    lexer(string);

    return 0;
}