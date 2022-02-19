#include <stdio.h>
#include <stdlib.h>


void print_array(int num_array[], int size);
void increament_array(int num_array[], int size);
void insertion_sort(int array[], int size);

int main()
{
    const int num_size = 10;
    int nums[num_size];
    for (int i = 0; i < num_size; i++)
    {
        scanf("%d", &nums[i]);
    }
    print_array(nums,num_size);
    insertion_sort(nums, num_size);
    print_array(nums,num_size);
    //increament_array(nums,num_size);
    return 0;
}


void print_array(int num_array[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        printf("%d ", num_array[i]);
    }
    puts("");
}
void increament_array(int num_array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        num_array[i] ++;
    }
}
void insertion_sort(int array[], int size)
{
    int selected_item, j;
    for (int i = 1;i<size;i++)
    {
        selected_item = array[i];
        j = i - 1; // j is the previous item of selected item
        while ((j >= 0) && (selected_item < array[j]))
        {
            array[j + 1] = array[j];
            j --;
        }
        array[j + 1] = selected_item;
    }
}
