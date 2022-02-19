#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STR_LEN 50;
#define NAMES_COUNT 5;

void print_string_array(char string[][MAX_STR_LEN], int strings_count);
int main()
{
    char names[NAMES_COUNT][MAX_STR_LEN] = 
    {
        "Ehsan", 
        "Reza",
        "Zahra",
        "Negin",
        "Kimia",
    };
    print_string_array(names, NAMES_COUNT);
    int j;
    char selected_item[MAX_STR_LEN];
    for (int i = 0; i < NAMES_COUNT; i++)
    {
        strcpy(selected_item,names[i]);
        j = i - 1;
        # صعودی یا ندولی
        while ((j>=0)&&(strcmp(selected_item, names[j]) > 0 ))
        {
            strcpy(names[j - 1],names[j]);
            j--;
        }
        strcpy(names[j + 1],selected_item);
    }
    puts("-------------------------------------------------------");
    print_string_array(names, NAMES_COUNT);

    }
    
}