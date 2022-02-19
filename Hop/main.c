#include <stdio.h>
#include <stdlib.h>

int main()
{
    int iter = 0;
    while (iter <= 20)
    {
        if (iter % 5 == 0 )
        {
            printf("\nHop\n");
            iter++;
            continue;
        }
        printf("\n%d\n", iter);
        iter ++;
    }
    return 0;
}
