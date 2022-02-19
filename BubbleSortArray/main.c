#include <stdio.h>
#include <stdlib.h>

// sorts the array 
void bubble_sort(int array[], int size);

// Prints the array
void print(int array[], int size);


int main()
{
  const int num_size = 10;                                                                                    
  int nums[num_size];                                                                                         
  for (int i = 0; i < num_size; i++)                                                                          
  {                                                                                                           
       scanf("%d", &nums[i]);                                                                                  
  }     
  bubble_sort(nums, num_size);
  printf("Result :\n");
  print(nums, num_size); 
}
void print(int array[], int size) {

  for (int i = 0; i < size; ++i) {

    printf("%d  ", array[i]);

  }
  printf("\n");
}

void bubble_sort(int array[], int size) {
  int i, j;
  for (j = 0; j < size - 1; ++j) {
    for (i = 0; i < size - j - 1; ++i) {
      if (array[i] > array[i + 1]) {
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
}
