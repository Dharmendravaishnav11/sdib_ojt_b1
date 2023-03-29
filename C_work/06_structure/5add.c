#include<stdio.h>
struct arithmetic
{
    int a;
    int b;
    int result;
}val;
int add(int a,int b);
int main()
{
    printf("Enter two no");
    scanf("%d %d",&val.a,&val.b);
val.result=add(val.a,val.b);
printf("%d\n",val.result);
return 0;
}

int add(int a,int b)
{
return (a+b);
}