#include <stdio.h>
#include <stdlib.h>

void convert(int decimal_number);

int main()
{
	int n;
	printf("Enter decimal number to convert\n");
	scanf("%d", &n);
	convert(n);
	return 0;
}

void convert(int decimal_number)
{
	int binary_number[32];
	int i = 0;
	while (decimal_number > 0)
	{
		binary_number[i] = decimal_number % 2;
		decimal_number /= 2;
		i++;
	}
	for (int j = i - 1; j >= 0; j--)
	{
		printf("%d", binary_number[j]);
	}
}