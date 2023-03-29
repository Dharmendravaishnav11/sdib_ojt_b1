#include<stdio.h>
#define BIG(x,y) (x>y) ? x:y 
int main()
{
    int a,b,result,*p;
    char y='f',z='s';
    printf("Enter two integer");
    scanf("%d %d",&a,&b);
    printf("Biggest of two no is : %d\n",BIG(a,b));
}