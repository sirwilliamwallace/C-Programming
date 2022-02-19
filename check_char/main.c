#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    puts("Enter The character !\n");
    c = getchar();
    if (c >= 'a' && c <= 'z')
    {
        c -= 32;
        printf("your char became >>> %c\n", c);
    }
    else if (c >= 'A' && c <= 'Z')
    {
        c += 32;
        printf("your char became >>> %c\n", c);
    }
    else
    {
        puts("Somthing ain't right nigga ! \n");
    }
    return 0;
}
