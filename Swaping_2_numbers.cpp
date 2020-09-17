


#include <stdio.h>

int main()
{
   int a,b,c;
   printf("Enter 2 numbers\n");
   scanf("%d%d",&a,&b);
   printf("Numbers before swaping are a=%d and b=%d\n",a,b);
   c=a;
   a=b;
   b=c;
   printf("Numbers after swaping are a=%d and b=%d\n",a,b);
   
}

