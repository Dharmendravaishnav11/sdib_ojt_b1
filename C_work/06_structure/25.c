#include<stdio.h>
int main()
{
    struct byte
    {
        int one:1;
    };
    struct byte var={1};
    printf("%d ",var.one);
    return 0;
}