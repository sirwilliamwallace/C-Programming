#include <stdio.h>
#include <stdlib.h>
#include <limits.h> // using minimum and maximum value

int max;
int max2;

void print();
void input_and_max();
void init_variables();


int main()
{
	init_variables();
	input_and_max();
	print();
	return 0;
}
void init_variables()
{
	max = INT_MIN;
	max2 = INT_MIN;
}
void print()
{
	printf("the first max number is %d and second one is %d\n",max,max2);
}
void input_and_max()
{
	int n;
	puts("How many numbers will ya enter ?");
	scanf("%d", &n);
	puts("Enter numbers:");
	for (int i=0; i < n;i++)
	{
		int num;
		scanf("%d", &num);
		if (num > max2)
		{
			if (num > max)
			{
				max2 = max;
				max = num;
			}
			else // num <= max
			{
				max2 = num;
			}
		}

	}
}

