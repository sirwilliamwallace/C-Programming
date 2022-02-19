#include <stdio.h>
#include <stdlib.h>


// checks if number is positive
void check_positive(int num);

// Calculates average
void calculate_average(float array[], int size);

int main() {
    int n;
    printf("Enter the numbers of elements: ");
    scanf("%d", &n);
    float num[n];
    check_positive(n);
    calculate_average(num,n);
    return 0;
}

void calculate_average(float array[], int size)
{
    float sum = 0.0, avg;
    int i;
    for (i = 0; i < size; ++i) {

        printf("%d. Enter number: ", i + 1);
        scanf("%f", &array[size]);
        sum += array[size];
    }
    avg = sum / size;
    printf("Average = %.2f", avg);

}
void check_positive(int num)
{
   while (num < 1) {
        printf("Error! num can only be positive.\n");
        printf("Enter the number again: ");
        scanf("%d", &num);
    }

}

