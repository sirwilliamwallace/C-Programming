#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    puts("Please show me your ID\nEnter Your age truthfully\n");
    scanf("%d",&age);
    if (age < 21)
    {
        printf("Your unqualified to drink alcohol\n");
    }
    if (age >= 21)
    {
        puts("What will you drink sir");
    }
    return 0;
}
