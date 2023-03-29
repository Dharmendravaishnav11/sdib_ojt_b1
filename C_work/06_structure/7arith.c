#include<stdio.h>
struct arith
{
    int a,b;
    int(*fnptr)(int,int);
}add,sub;
int addition(int a,int b)
{
      return a+b;
}
int subtraction(int a,int b)
{
    return a-b;
}
int main()
{
printf("Enter the value");
scanf("%d %d",&add.a,&add.b);
sub=add;
add.fnptr=addition;
sub.fnptr=subtraction;
printf("\n%d arithmetic operation",add.fnptr(add.a,add.b));
printf("\n%d subtraction operation",sub.fnptr(sub.a,sub.b));
return 0;
}
