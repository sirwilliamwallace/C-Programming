#include <stdio.h>
#include <stdlib.h>


int fibonancci(int x);

int main()
{
	int j;
	puts("Enter number for fibonancci algorithm example : [1, 1 , 2 .... number] >>>>>>");
	printf("Result of :\n");
	scanf("%d",&j);
   for(int i = 1;i<=j;i++) {
      printf("%d ",fibonancci(i));         
   }
   printf("\nLast sequence is : \t%d\n", fibonancci(j));
}
// 0
// 1
int fibonancci(int x) {
   if(x == 0)
   {
      return 0;
   }
   else if(x == 1)
   {
      return 1;
   }
   else 
   {
      return (fibonancci(x-1) + fibonancci(x-2));
   }
}
