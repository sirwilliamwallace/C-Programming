#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int pi = 3;
    int r;
    scanf("%d", &r);
    int Perimeter = 2 * r * pi;
    int Area = r * r * pi;
    printf("Perimeter = %d, Area = %d\n", Perimeter, Area);
    return 0;
}
