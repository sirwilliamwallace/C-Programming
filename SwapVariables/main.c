#include <stdio.h>
#include <stdlib.h>
void swap(int x, int y);
int main()
{
	int a,b;
	scanf("%d%d", &a,& 	b);
	printf("a = %d, b = %d\n",a,b);	
	swap(a, b);
	printf("a = %d, b = %d\n",a,b);
	return 0;
}
void swap(int x, int y)
{
	printf("x = %d, y = %d\n",x,y);
	int temp = x;
	x = y;
	y = temp;
	printf("x = %d, y = %d\n",x,y);

}