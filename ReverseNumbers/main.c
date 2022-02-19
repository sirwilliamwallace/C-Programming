#include <stdio.h>
#include <stdlib.h>
void reverse_num(int num);
int main(void)
{    
    int num;
    puts("\tby entering -1 program will reverse the numbers that you entered");
    puts("Enter numbers to be reversed: ");
    reverse_num(num);    
    return 0;
}

void reverse_num(int num)
{    
    int x;
    scanf("%d", &num);
    if (num == 0)
    {
        return;
    }
    else if (num != -1)
    {
        x = num % 10;
        reverse_num(num/10);
        printf("%d", x);
    }
}