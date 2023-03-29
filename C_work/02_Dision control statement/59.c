#include<stdio.h>
int main()
{
int num;
printf("Enter a number");
scanf("%d",&num);
switch (num>0)
{
case 1:
printf("Number is positive");
    break;
case 0:
switch (num<0)
{
case 1:
printf("Number is negative");
break;
default:
printf("Number is zero");
    break;
}
break;
}
return 0;
}
