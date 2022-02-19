#include <stdio.h>
#include <stdlib.h>

int main(){
    float students_marks[50];
    float students_marks_sum = 0;
    float students_marks_avg;
    
    for (int i = 0; i < 50;i++)
    {
        printf("Please enter score of student #%d\n", students_marks[i]);
        scanf("%f", &students_marks[i]);
    }
    for (int i = 0; i < 50; i++)
    {
        students_marks_sum += students_marks[i];
    }
    students_marks_avg = students_marks_sum / 50.0;
    for (int i = 0; i < 50;i++)
    {
        if (students_marks[i]>students_marks_avg)
        {
            printf("Student : #%d is above average score [%f] has the score of : %f\n",i,students_marks_avg,students_marks[i]);
        }
        
    }
    
}