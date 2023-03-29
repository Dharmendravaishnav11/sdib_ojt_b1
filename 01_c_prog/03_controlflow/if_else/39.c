#include<stdio.h>
int main()
{
int num1,num2;
printf("Enter two no");
scanf("%d %d",&num1,&num2);
if (num1>num2)
{
    printf("%d is Maximum",num1);
}
if (num2>num1)
{
    printf("%d is Maximum",num2);
}
if(num1==num2)
{
    printf("Both are equal");
}
return 0;
}