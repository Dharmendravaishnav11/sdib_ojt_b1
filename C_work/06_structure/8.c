#include<stdio.h>
struct arith
{
    int a,b;
    int(*fnptr[2])(int,int);
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
    int i;
    for ( i = 0; i < 2; i++)
    {
printf("\nEnter the value");
scanf("%d %d",&add.a,&add.b);
sub=add;
add.fnptr[i]=addition;
sub.fnptr[i]=subtraction;
printf("\n%d arithmetic operation",add.fnptr[i](add.a,add.b));
printf("\n%d subtraction operation",sub.fnptr[i](sub.a,sub.b));
    }
return 0;
}
