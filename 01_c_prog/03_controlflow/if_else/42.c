#include<stdio.h>
int main()
{
int num;
printf("Enter a num");
scanf("%d",&num);
if (num>0)
{
    printf("Number is positive");
}
else if (num<0)
{
        printf("Number is Negative");
}
else {
    printf("Number is equal to 0");
}
return 0;
}