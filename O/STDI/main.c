#include <stdio.h>
#include <stdlib.h>

int main()
{
    // puts

    // scanf("format", [&var])

    // getchar()
    char t;
    puts("Enter a character");
    t = getchar();
    printf("character entered : %c, ascii value : %d , plus 2 char : %c ", t,t,t+2);
    return 0;
}
