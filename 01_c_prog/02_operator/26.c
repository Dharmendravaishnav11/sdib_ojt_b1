#include<stdio.h>
int main()
{
int a=2,b=3,c;
printf("Before swapping\na=%d\nb=%d",a,b);
c=a;
a=b;
b=c;
printf("After swapping\na=%d\nb=%d",a,b);
return 0;
}