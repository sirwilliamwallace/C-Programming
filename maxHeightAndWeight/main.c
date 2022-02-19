#include <stdio.h>
#include <stdlib.h>

int max3(int value1, int value2, int value3)
{
	if (value1 > value2)
	{
		if (value1 > value3)
		{
			return value1;
		}else // Value 3 >= Value 1
		{
			return value3;
		}
	}else // Value 2 >= Value 1
	{
		if (value3 > value2)
		{
			return value3;
		}else
		{
			return value2;
		}
	}
}
int main()
{
	int w1, w2, w3;
	int h1, h2, h3;
	int max_h, max_w;
	puts("Please enter weights : ");
	scanf("%d%d%d",&w1,&w2,&w3);
	puts("Please enter heights : ");
	scanf("%d%d%d",&h1,&h2,&h3);
	

	// Compare heights
	max_h = max3(h1,h2,h3);

	// Compare weights
	max_w = max3(w1,w2,w3);



	// Print result
	printf("Max weight is %d\n", max_w);
	printf("Max height is %d\n", max_h);

	return 0;
}