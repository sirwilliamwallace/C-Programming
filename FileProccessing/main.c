#include <stdio.h>
#include <stdlib.h>


int main()
{
    FILE *file_pointer;
    file_pointer = fopen("data.txt", "w");
    char username[50];
    printf("Enter Username:\n");
    scanf("%s",username);
    printf("Your name is written in data.txt \n");
    fprintf(file_pointer,"User %s is Creater", username);
    fclose(file_pointer);
    return 0;
}
