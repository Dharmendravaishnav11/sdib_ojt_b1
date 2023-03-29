#include<stdio.h>
#pragma pack(2)
struct date
{
    unsigned int a:4;
    unsigned char ch:1;
}d={10,'A'};
int main()
{
    printf("%d",sizeof(d));
  //  printf("%u",&d);
    return 0;
}