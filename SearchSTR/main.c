#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void check_string(char str1[], char str2[]);
int main()
{
    char str1[50];
    char str2[50];
    printf("Enter original to search string: ");
    scanf("%s",str1);
    printf("Enter  string to search from: ");
    scanf("%s",str2);
    check_string(str1, str2);
    return 0;
}
void check_string(char str1[], char str2[])
{
    int x, i, j;
    for (x = 0; str2[x] != '\0'; x++);
        for (i = 0, j = 0; str1[i] != '\0' && str2[j] != '\0'; i++)
        {
            if (str1[i] == str2[j])
                j++;
            else
                j = 0;
        }
    if (j == x)
        printf("YES");
    else
        printf("NO");
}