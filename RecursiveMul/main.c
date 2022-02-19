#include <stdio.h>
#include <stdlib.h>

int recursive_mul(int a, int b);


int main()
{
	int result = recursive_mul(11,11);
	printf("Recursive mul is ----> %d\n", result);
	return 0;
}


int recursive_mul(int a, int b)
{
	if (a > 1)
	{
		return b + recursive_mul(a - 1, b);
	}
	else
	{
		return b;
	}
}