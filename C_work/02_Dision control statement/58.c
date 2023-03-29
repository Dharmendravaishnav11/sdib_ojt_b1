#include<stdio.h>
int main()
{
int no;
printf("Enter a no");
scanf("%d",&no);
switch (no%2==0)
{
case 1:
printf("%d is even",no);
    break;
default:
printf("%d is odd",no);
    break;
}
return 0;
}