#include<stdio.h>
enum states{off,on};
int main()
{
    int n;
    enum states s;
    printf("Enter no");
    scanf("%d",&n);
    if(n==off)
    {
        printf("Off");
    }
    if (n==on)
    {
        printf("ON");
    }
    return 0;
}
