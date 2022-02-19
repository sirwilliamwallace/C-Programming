#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    if((a < b + c) && (b < a + c) && (c < a + b))
    {
        printf("Triangular");
    }
    else
    {
        printf("None");
    }

    return 0;
}
