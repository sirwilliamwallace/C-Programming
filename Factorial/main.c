#include <stdio.h>
#include <stdlib.h>

int factorial(int num);
int main()
{
	int x;
	puts("Enter number >>>");
	scanf("%d", &x);
	int result = factorial(x);
	printf("%d\n", result);	
	return 0;
}
int factorial(int num)
{
	if ((num == 0 || num == 1))
		return 1;
	return num * factorial(num-1);
}
