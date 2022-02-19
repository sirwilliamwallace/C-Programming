#include <stdio.h>
#include <stdlib.h>


#define MAX_STR_LEN 50
#define STUDENTS_COUNT 3


struct student
{
    char first_name[MAX_STR_LEN];
    char last_name[MAX_STR_LEN];
    int entrance_year;
    float average;
};
int main()
{
    struct student students[STUDENTS_COUNT];
    for (int i = 0; i < STUDENTS_COUNT; i++)
    {
        system("clear");
        printf("Please Enter Student [#%d] First Name:\n", i + 1);
        scanf("%s", students[i].first_name);
        printf("Please Enter Student [#%d] Last Name:\n", i + 1);
        scanf("%s", students[i].last_name);
        printf("Please Enter Student [#%d] Entrance Year:\n", i + 1);
        scanf("%d", &students[i].entrance_year);
        printf("Please Enter Student [#%d] Average Number:\n", i + 1);
        scanf("%f", &students[i].average);
    }
    system("clear");
    printf("ID\tFirst Name\tLast Name\tEntrance Year\tAverage Number\n");
    for (int i = 0; i < STUDENTS_COUNT; i++)
    {
        printf("%d\t%s\t%s\t%d\t%f\n",i + 1,
        students[i].first_name,
        students[i].last_name,
        students[i].entrance_year,
        students[i].average
        );
    }    
    return 0;
}
