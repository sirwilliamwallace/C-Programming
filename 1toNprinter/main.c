#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    puts("Enter n >> ");
    scanf("%d", &n);
    puts("----------------------------");
    int i = 0;
    while (i < n)
    {
            printf("%d -- *\n", ++i);
    }

    return 0;
}
