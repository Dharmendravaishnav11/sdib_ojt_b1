#include<stdio.h>
int main()
{
int num1,num2;
printf("Enter two num");
scanf("%d %d",&num1,&num2);
switch (num1>num2)
{
case 1:
   printf("%d is Maximum",num1);
   break;
default:
   printf("%d is maximum",num2);
}
return 0;
}