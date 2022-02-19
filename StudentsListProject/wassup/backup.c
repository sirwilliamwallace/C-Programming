/**
 * Author:    ata babaei   ata.abishka@gmail.com
 * Created:   02.05.2021
 * 
 * maktabkhoone c learneang prject
 * master:  mr anvari 
 **/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ST_NUMBER_LEN 11
#define MAX_ST_FIRST_NAME_LEN 80
#define MAX_ST_LAST_NAME_LEN 80

#define MAX_STUDENTS 300

#define FILE_NAME "myStudent.bin"

struct s_StudentInfo
{
	char studentNumber[MAX_ST_NUMBER_LEN];
	char firstName[MAX_ST_FIRST_NAME_LEN];
	char lastName[MAX_ST_LAST_NAME_LEN];
	float avr;
};
void clrscr(void);
void dump_data_in_ram(struct s_StudentInfo tmp[MAX_STUDENTS]);
void read_data_from_file(struct s_StudentInfo tmp[MAX_STUDENTS]);
void save_data_to_file(struct s_StudentInfo tmp[MAX_STUDENTS]);
void add_one_student(struct s_StudentInfo tmp[MAX_STUDENTS]);
void delete_one_student(struct s_StudentInfo tmp[MAX_STUDENTS]);
void search_student_with_studentNumber(struct s_StudentInfo tmp[MAX_STUDENTS]);
void bsortDesc(struct s_StudentInfo tmp[MAX_STUDENTS]);

void show_menu();

int main()
{
	struct s_StudentInfo st[MAX_STUDENTS];

	clrscr();
	puts("##########################################################################");
	puts("###################                WELCOME               #################");
	puts("##########################################################################");
	puts("########################  full screan your terminal  #####################");
	puts("##########################################################################");

	puts("salam ,ba arz khaste nabashid , va manoon az amoozesh ha");
	puts("ostad anvari , in proje ru tu github uplode kardam ");
	puts("man kolan tu github ham ebtedayii am ");
	puts("bara behboode proje va ravesh haye sahihe barname nevisi , mosharekat konid mamnoon misham");
	puts("agar ham  nabayad upload mikardam begid hazfesh konm . mamnoon ");
	puts("https://github.com/abishka/c-learning-students-list \n");
	puts("ata.abishka@gmail.com \n");



	read_data_from_file(st);

	puts("\n\n\n\n");

	show_menu();

	while (1)
	{

		int n;

		scanf("%d", &n);
		clrscr();

		switch (n)
		{

		case 0:
			dump_data_in_ram(st);
			puts("\n\n\t\tData dump successfully");

			break;

		case 1:
			add_one_student(st);
			puts("\n\n\t\tData added successfully");

			break;

		case 2:
			delete_one_student(st);
			puts("\n\n\t\tData deleted successfully");

			break;

		case 3:
			search_student_with_studentNumber(st);
			puts("\n\n\t\tData search successfully");

			break;

		case 4:
			bsortDesc(st);
			dump_data_in_ram(st);
			puts("\n\n\t\tData sorted successfully");

			break;

		case 5:
			save_data_to_file(st);
			puts("\n\n\t\tData saved  successfully");

			break;

		case 6:
			read_data_from_file(st);
			dump_data_in_ram(st);
			puts("\n\n\t\tData read from file successfully");

			break;

		case 7:
			return 0;
			break;

		default:
			puts("not valid number , try an other number ");
		}
		show_menu();
	}
	return 0;
}

//functions

void delete_one_student(struct s_StudentInfo tmp[MAX_STUDENTS])
{
	int n = 0;

	dump_data_in_ram(tmp);
	printf("\ninput index of student that u want to delete it ");

	scanf("%d", &n);

	for (int i = n; i < MAX_STUDENTS; ++i)
	{
		memcpy((void *)&tmp[i], (void *)&tmp[i + 1], sizeof(struct s_StudentInfo));

		if (!strcmp(tmp[i].firstName, ""))
			break;
	}
}

void add_one_student(struct s_StudentInfo tmp[MAX_STUDENTS])
{
	int i = 0;

	for (i = 1; i < MAX_STUDENTS; ++i)
	{
		if (!strcmp(tmp[i].firstName, ""))
			break;
	}
	printf("\nstudentNumber:");
	scanf("%s", tmp[i].studentNumber);
	printf("\nfirstName:");
	scanf("%s", tmp[i].firstName);
	printf("\nlastName:");
	scanf("%s", tmp[i].lastName);
	printf("\navr:");
	scanf("%f", &tmp[i].avr);
}
void search_student_with_studentNumber(struct s_StudentInfo tmp[MAX_STUDENTS])
{
	char inputstr[MAX_STUDENTS];
	int number_of_maching_item;
	char *p;
	printf("\nstudentNumber:");
	scanf("%s", inputstr);

	// Find first occurrence of s2 in s1
	for (int i = 1; i < MAX_STUDENTS; ++i)
	{
		if (!strcmp(tmp[i].firstName, ""))
			break;

		p = strstr(tmp[i].studentNumber, inputstr);

		// Prints the result
		if (p)
		{
			printf("index:%d studentNumber: %-11s firstName: %-20s lastName: %-30s avr: %2.2f\n",
				   i,
				   tmp[i].studentNumber,
				   tmp[i].firstName,
				   tmp[i].lastName,
				   tmp[i].avr);
			number_of_maching_item++;
		}
	}
	printf("\n\nfind %d  number of matching studentnumber", number_of_maching_item);
}

void save_data_to_file(struct s_StudentInfo tmp[MAX_STUDENTS])
{
	FILE *fptr;

	// strcpy(st[1].studentNumber,"123456789A");
	// strcpy(st[1].firstName,"ata");
	// strcpy(st[1].lastName,"babaei");
	// st[1].avr=15.5;

	// strcpy(st[2].studentNumber,"99999999");
	// strcpy(st[2].firstName,"Ali");
	// strcpy(st[2].lastName,"rahimi");
	// st[2].avr=19;

	if ((fptr = fopen(FILE_NAME, "wb")) == NULL)
	{
		printf("Error! opening file");
	}

	for (int i = 1; i < MAX_STUDENTS; ++i)
	{
		if (!strcmp(tmp[i].firstName, ""))
			break;
		fwrite(&tmp[i], sizeof(struct s_StudentInfo), 1, fptr);
	}
	fclose(fptr);

	printf("Data saved to file \n");
}

void read_data_from_file(struct s_StudentInfo tmp[MAX_STUDENTS])
{
	FILE *fptr;

	if ((fptr = fopen(FILE_NAME, "rb")) == NULL)
	{
		printf("Error! opening file");
	}

	for (int i = 1; i < MAX_ST_FIRST_NAME_LEN; ++i)
	{
		fread(&tmp[i], sizeof(struct s_StudentInfo), 1, fptr);
		strcpy(tmp[i + 1].firstName, "");
		if (!strcmp(tmp[i].firstName, ""))
			break;
	}

	fclose(fptr);
}

void dump_data_in_ram(struct s_StudentInfo tmp[MAX_STUDENTS])
{

	for (int i = 1; i < MAX_ST_FIRST_NAME_LEN; ++i)
	{
		if (!strcmp(tmp[i].firstName, ""))
			break;
		printf("index:%d studentNumber: %-11s firstName: %-20s lastName: %-30s avr: %2.2f\n",
			   i,
			   tmp[i].studentNumber,
			   tmp[i].firstName,
			   tmp[i].lastName,
			   tmp[i].avr);
	}
}

void show_menu()
{
	puts("\n");
	puts("######################       enter one number      #######################");

	puts("0.dump data in ram ");
	puts("1.add one student");
	puts("2.delete one student");
	puts("3.search student with studentNumber");
	puts("4.sorting with average");
	puts("5.save data in file ");
	puts("6.read and dump data in file ,(Your changes will be lost)");
	puts("7.close app without saving in file ");
}

void clrscr(void)
{
#if defined(_WIN32) || defined(_WIN64)
	system("cls");
#else
	system("clear");
#endif
}

void bsortDesc(struct s_StudentInfo structArr[MAX_STUDENTS])
{
	int i, j;
	struct s_StudentInfo temp;

	for (i = 0; i < MAX_STUDENTS - 1; i++)
	{
		for (j = 0; j < (MAX_STUDENTS - 1 - i); j++)
		{
			if (structArr[j].avr < structArr[j + 1].avr)
			{
				temp = structArr[j];
				structArr[j] = structArr[j + 1];
				structArr[j + 1] = temp;
			}
		}
	}
}