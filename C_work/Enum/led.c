#include<stdio.h>
enum led{on,off};
int main()
{
    enum led state;
    state=off;
    printf("%d",state);
    return 0;
}