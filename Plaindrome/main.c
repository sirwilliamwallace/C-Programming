#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void check_palindrome(char str[]);

int main(){
    char str[100];

    printf("Enter a string : ");
    scanf("%s", str);
    check_palindrome(str);
    return 0;
}

void check_palindrome(char str[])
{
    int i, length;
    length = strlen(str);
    int is_palindromic = 0;
    for(i=0;i < length ;i++)
    {
        if(str[i] != str[length-i-1]){
            is_palindromic = 1;
            break;
        }
    }
    if (is_palindromic == 0)
    {
        printf("[%s]\tis palindromic\n", str);
    }
    else
    {
        printf("[%s]\tis NOT palindrome\n", str);
    }
}