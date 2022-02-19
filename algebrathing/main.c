#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // gets x in float format from client and stores it in x variable
    float x;
    printf("Enter Your Number : \n");
    scanf("%f", &x);
    // puts x in this formula - > f(x)= sin^2(x) + cos^2(x)  
    double res = pow(sin(x), 2.0) + pow(cos(x), 2.0);
    // prints the result on cosole
    printf("%lf\n", res);
    return 0;
}
