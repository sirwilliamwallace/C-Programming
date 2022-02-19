#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 300
#define NAME 80
#define LAST_NAME 80
#define MAX_STR_LEN 100
#define FILE_NAME "STUDENTS.txt"
typedef struct student                                                                                                                                                                    
 {                                                                                                                                                                                 
	char studentNumber[MAX_STUDENTS];
	char firstName[NAME];
	char lastName[LAST_NAME];
	float avr;                                                                                                                                                               
 } Student;
void add_student(Student student[MAX_STUDENTS]);
void delete_student(Student student[MAX_STUDENTS]);
void search_student_with_studentNumber(Student student[MAX_STUDENTS]);
void sort_by_avr(Student student[MAX_STUDENTS]);
void save_data_to_file(Student student[MAX_STUDENTS]);
void read_data_from_file(Student student[MAX_STUDENTS]);
void dump_data_in_ram(Student student[MAX_STUDENTS]);
void show_menu();
int main()
{
    Student students[MAX_STUDENTS];
	read_data_from_file(students);
	puts("\n\n\n\n");
	show_menu();
	while (1==1)
	{
		int n;
		scanf("%d", &n);
		switch (n)
		{
		case 0:
		    dump_data_in_ram(students);
			puts("\n\n\t\tData dump successfully");
			break;
		case 1:
			add_student(students);
			puts("\n\n\t\tData added successfully");
			break;
		case 2:
			delete_student(students);
			puts("\n\n\t\tData deleted successfully");

			break;

		case 3:
			search_student_with_studentNumber(students);
			puts("\n\n\t\tData search successfully");

			break;

		case 4:
			sort_by_avr(students);
			dump_data_in_ram(students);
			puts("\n\n\t\tData sorted successfully");

			break;

		case 5:
			save_data_to_file(students);
			puts("\n\n\t\tData saved  successfully");

			break;

		case 6:
			read_data_from_file(students);
			dump_data_in_ram(students);
			puts("\n\n\t\tData read from file successfully");

			break;

		case 7:
			return 0;
			break;

		default:
			puts("not a valid number , try another number ");
		}
		show_menu();
	}
}

void add_student(Student student[MAX_STUDENTS])
{
	int i = 0;
	for (int i = 0; i < MAX_STUDENTS; i++)
	{
		if (strcmp(student[i+1].firstName, ""))
			break;
	}	
	printf("\nStudent number:");
	scanf("%s", student[i+1].studentNumber);
	printf("\nFirst name:");
	scanf("%s", student[i+1].firstName);
	printf("\nLast name:");
	scanf("%s", student[i+1].lastName);
	printf("\nAverage:");
	scanf("%f", &student[i+1].avr);   
}
void delete_student(Student student[MAX_STUDENTS])
{
	int n = 0;
	dump_data_in_ram(student);
	printf("\ninput index of student that u want to delete it ");
	scanf("%d", &n);
	for (int i = n; i < MAX_STUDENTS; ++i)
	{
		memcpy((void *)&student[i], (void *)&student[i + 1], sizeof(Student));
		if (!strcmp(student[i].firstName, ""))
			break;
	}
}

void search_student_with_studentNumber(Student student[MAX_STUDENTS])
{
	char inputstr[MAX_STUDENTS];
	int number_of_maching_item;
	char *p;
	printf("\nstudentNumber:");
	scanf("%s", inputstr);
	for (int i = 0; i < MAX_STUDENTS; i++)
	{
		if (!strcmp(student[i + 1].firstName, ""))
			break;
		p = strstr(student[i + 1].studentNumber, inputstr);
		if (p)
		{
			printf("ID:%d Student Number: %s First Name: %s Last Name: %s average: %f\n",
				   i,
				   student[i + 1].studentNumber,
				   student[i + 1].firstName,
				   student[i + 1].lastName,
				   student[i + 1].avr);
			number_of_maching_item++;
		}
	}
	printf("\n\nfound %d  number of matching studentnumber", number_of_maching_item);
}

void sort_by_avr(Student student[MAX_STUDENTS])
{
	int i, j;
	Student temp;
	for (i = 0; i < MAX_STUDENTS - 1; i++)
	{
		for (j = 0; j < (MAX_STUDENTS - 1 - i); j++)
		{
			if (student[j].avr < student[j + 1].avr)
			{
				temp = student[j];
				student[j] = student[j + 1];
				student[j + 1] = temp;
			}
		}
	}
}
void save_data_to_file(Student student[MAX_STUDENTS])
{
	FILE *fptr;
	fptr = fopen(FILE_NAME, "w");
	if (fptr == NULL)
	{
		printf("Error opening file !");
	}

	for (int i = 1; i < MAX_STUDENTS; ++i)
	{
		if (!strcmp(student[i].firstName, ""))
			break;
		fwrite(&student[i], sizeof(Student), 1, fptr);
	}
	fclose(fptr);

	printf("Data saved to file \n");
}
void read_data_from_file(Student student[MAX_STUDENTS])
{
	FILE *fptr;
	fptr = fopen(FILE_NAME, "w");
	fptr = fopen(FILE_NAME, "r");
	if (fptr == NULL)
	{
		printf("Error! opening file");
	}
	for (int i = 1; i < NAME; ++i)
	{
		fread(&student[i], sizeof(Student), 1, fptr);
		strcpy(student[i + 1].firstName, "");
		if (!strcmp(student[i].firstName, ""))
			break;
	}
	fclose(fptr);
}
void dump_data_in_ram(Student student[MAX_STUDENTS])
{

	for (int i = 0; i < NAME; i++)
	{
		if (!strcmp(student[i].firstName, ""))
			break;
		printf("index:%d studentNumber: %s firstName: %s lastName: %s avr: %f\n",
			   i,
			   student[i].studentNumber,
			   student[i].firstName,
			   student[i].lastName,
			   student[i].avr);
	}
}
void show_menu()
{
	puts("\n");
	puts("Enter number:");
	puts("0.dump data in ram ");
	puts("1.add one student");
	puts("2.delete one student");
	puts("3.search student with studentNumber");
	puts("4.sorting with average");
	puts("5.save data in file ");
	puts("6.read and dump data in file ,(Your changes will be lost)");
	puts("7.close app without saving in file ");
}
