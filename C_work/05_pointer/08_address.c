#include<stdio.h>
void main()
{
   int a1;
   int*ptr;
   printf("Enter a value\n");
   scanf("%d", &a1);
   ptr=&a1;
   printf("\n%d", *ptr);
}