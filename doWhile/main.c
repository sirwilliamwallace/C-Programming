#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum = 0;
    int num;
    do
    {
        scanf("%d", &num);
        sum += num;
    }
    while(num != 0);
    printf("Sum >> %d\n", sum);
    return 0;
}
