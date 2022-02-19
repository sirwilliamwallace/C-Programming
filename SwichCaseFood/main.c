#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Please Choose your food\n");
    puts("[1] Pizza");
    puts("[2] Burger");
    puts("[3] Potato");
    puts("[4] Salad");
    int choosed_item;
    scanf("%d", &choosed_item);
    switch (choosed_item)
    {
        case 1:
            printf("You Ordered Pizza");
            break;
        case 2:
            printf("You Ordered Burger");
            break;
        case 3:
            printf("You Ordered Potato");
            break;
        case 4:
            printf("You Ordered Salad");
            break;
        default:
            printf("You have entered a wrong nnumber\n");
    }
    return 0;
}
