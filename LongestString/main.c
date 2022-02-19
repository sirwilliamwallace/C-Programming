#include<stdio.h>
#include<string.h>


#define SIZE 100 
#define STR_SIZE 20

void Longest_Rev(char str[][STR_SIZE],int n);
void reverse(char str[]);

int main()
{
	char str[SIZE][STR_SIZE];
	int i, count=0, n;
	printf("How many words to accept: \n");
	scanf("%d",&n);
	printf("Enter %d words:\n",n);
	for(i=0;i<n;i++)
	    scanf("%s",str[i]);
	Longest_Rev(str,n);
    return 0;
}
void Longest_Rev(char str[][STR_SIZE],int n)
{
	int i, max, len1, c;
	max = strlen(str[0]);
	for(i=1;i<n;i++)
    {
       len1 = strlen(str[i]);
       if(len1 > max)
        {
            c = i;
            max = len1;
        }
    }
	printf("The longest string is >>> %s\n",str[c]);
    reverse(str[c]);
	printf("Reversed of longest string is >>> %s\n",str[c]);
}

void reverse(char str[])
{
  int n = strlen(str);

  for (int i = 0; i < n / 2; i++)
  {
    char ch = str[i];
    str[i] = str[n - i - 1];
    str[n - i - 1] = ch;
  }
}
