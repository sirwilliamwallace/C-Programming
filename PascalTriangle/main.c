/* Program for Pascal triangle */

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,j,k,n,c;
    printf("Radif ha : ");
    scanf("%d",&n);
    printf("\n ");

    for(i=0;i<n;i++)
    {
        c=1;
        for(k=0;k<n-i;k++)
        {
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
            printf(" %d ",c);
            c=(c*(i-j)/(j+1));
        }
        printf("\n");
    }
    return 0;
}
