#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, s, i, j;
    printf("Enter number of Rows: ");
    scanf("%d",&n);
    for(i = 0; i <= n; i++)
    {
        for(s = n; s > i; s--)
            printf(" ");
        for(j=0; j<i; j++)
            printf("* ");
            printf("\n");
    }
    for(i = 1; i < n ; i++)
    {
        for(s = 0; s < i; s++)
            printf(" ");
        for(j = n; j > i; j--)
            printf("* ");
            printf("\n");
    }
    return 0;
}
