#include<stdio.h>
#define BIG(x,y) (x>y) ? x:y 
int main()
{
    int a,b,c;
    printf("Enter three integer");
    scanf("%d %d %d",&a,&b,&c);
    printf("Biggest of three no is : %d\n",BIG(BIG(a,b),c));
}