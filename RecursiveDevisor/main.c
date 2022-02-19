#include <stdio.h>
#include <stdlib.h>
int power_function(int base,int power);
int main()
{
	int base, power;
	puts("Enter base num ");
	scanf("%d", &base);
	puts("Enter power num ");
	scanf("%d", &power);
	printf("The Result is : %d\n", power_function(base,power));
	return 0;
}
// base ^ power = base * base ^ (power - 1)
// base ^ 0 = 1
int power_function(int base, int power)
{
	if (power == 0)
		return 1;
	return base * power_function(base, power - 1);
}