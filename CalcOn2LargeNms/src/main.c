#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

#define MAXL 50
void big_sum(char a[2002],char b[2002],char c[2002])
{
    int i,l=0,p;
    for(i=2000;i>=0;i--)
    {
        p=((a[i]-48)+(b[i]-48)+l);
        c[i]=(p%10)+48;
        if((p<=9))
        {
            l=0;
        }
        else
        {
            l=1;
        }
    }
}
    //-
void multiply()
    {
    const int Max = 100;
    char n1[Max],n2[Max];
    int r[Max],n3[Max][Max];
    int lenn1=0,lenn2=0,h,i,j,k=0,t=0,m=0,d=0,f=0,w=0;
    for (i = 0; i < Max; i++) 
     	r[i] = 0;
    
    for (i = 0; i < Max; i++) 
    for (j = 0; j < Max; j++) 
     	n3[i][j] = 0;
    printf("\nEnter number1:\n");
    scanf("%s",n1);
    printf("\nEnter number2:\n");
    scanf("%s",n2);
    lenn1 = strlen(n1)-1;
    lenn2 = strlen(n2)-1;
    h=-1;
    for(i=lenn2;i>=0;i--)
      {
            k=Max+1;
            h=h+1;
            k=k - h;
            k=k-2;
            d=0;
            for(j=lenn1;j>=0;j--)
            {
                t = (n2[i]-48) * (n1[j]-48);
                m = (t + d) % 10;
                d = (t + d) / 10;
                n3[h][k]=m;
                k--;
            }
      n3[h][k]=d;
      }
      w=Max-1;
      d=0;
      for(i=Max-1;i>=0;i--)
       {
        t=0;
        for(j=0;j<=lenn2;j++)
           t+=n3[j][i];
        m=(t+d) % 10;
        d=(t+d) / 10;
        r[w--] = m;
       }
     printf("\nResult:\n");
     f=0;
     for(i=0;i<=Max-1;i++)
      {
       if (r[i] != 0)
          f=1;
    	if(f==1)
    	  printf("%d",r[i]);
      }
    }
    
    void Sub(char x[50],char y[50])
{
    int i,j,temp=0;
    char z[50]={'0'};
    for(i=0;i<50;i++)
    {
        z[i]='0';
    }
    for(i=49;i>=0;i--)
    {
        temp=x[i]-y[i];
        if(temp>=0)
        {
            z[i]=temp+48;
        }
        else
        {
            j=i-1;
            while(x[j]=='0')
            {
                x[j]='9';
                j--;
            }
            x[j]=x[j]-1;
            z[i]=((x[i]-48)-(y[i]-48)+10)+48;
        }
    }
    for(i=0;i<50;i++)
    {
        x[i]=z[i];
    }
}

int compare(char x[50],char y[50])
{
 int i;
 for(i=0;i<50;i++)
 {
  if(x[i]>y[i]) return 1;
  if(x[i]<y[i]) return -1;
 }
return 0;
}
int main_division(char x[50],char y[50])
{
    int counter=0;
    while(compare(x,y)==0 || compare(x,y)==1)
    {
        Sub(x,y);
        counter++;
    }
    puts("Result:\n");
    printf("%d",counter);
    return counter;
}
void devide(void)
{
    char x[50]={'0'},y[50]={'0'},temp[50]={'0'},counter[50]={'0'};
    int i,len1,len2;
    for(i=0;i<50;i++)
    {
        x[i]=y[i]=temp[i]=counter[i]='0';
    }
    printf("\nEnter the first number:\n");
    scanf("%s",temp);
 
    len1=strlen(temp);
    for(i=0;i<len1;i++)
    {
        x[50-len1+i]=temp[i];
    }
    printf("\nEnter the second number:\n");
    scanf("%s",temp);
 
    len2=strlen(temp);
    for(i=0;i<len2;i++)
    {
        y[50-len2+i]=temp[i];
    }
    if(compare(x,y)==-1)
        printf("0");
 
    main_division(x,y);
}
int main()
{
    int n;
    puts("Enter a number >>>>");
    puts("[1] Divide 2 large numbers");
    puts("[2] Multiply 2 numbers");
    puts("[3] Exit");
    scanf("%d", &n);
    while (1){
    switch (n)
    {
    case 1:
        devide();     
        break;
    case 2:
        multiply();
        break;
    default:
        puts("Please enter a valid number");
        continue;
    }
    }
    return 0;
}