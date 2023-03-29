#include<stdio.h>
int main()
{
int num1,num2,num3;
printf("Enter three no");
scanf("%d %d %d",&num1,&num2,&num3);
if (num1>num2 && num1>num3)
{
    printf("%d is Maximum",num1);
}
else if (num2>num1 && num2>num3)
{
    printf("%d is Maximum",num2);
}
else if (num3>num1 && num3>num2)
{
    printf("%d is Maximum",num3);
}
else{
    printf("all are equal");
}
return 0;
}