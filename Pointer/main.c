#include <stdio.h>


int main(){
    int a = 14;
    int *ptr_a = &a;
    int **ptr_b = &ptr_a;
    (*(*ptr_b)) = 12;
    printf("%p\tis\t%d\n", &ptr_a, a);
}
