#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, number;
    int max,min;
    // Read Input from user for count of numbers
    printf("Please enter n:");
    scanf("%d", &n);
    // Read Input from user  for maximum var to have a valid number in it
    scanf("%d", &number);
    max = number;
    min = number;
    // for loop
    for (int i = 0; i < n - 1 ;i++)
    {
        scanf("%d", &number);
        if (number > max )
        {
            max = number;
        }
        else if (number < min)
        {
            min = number;
        }
    }
    // print statement for maximum number and minimum number
    printf("Max is : %d\n", max);
    printf("Min is : %d\n", min);
    return 0;
}
