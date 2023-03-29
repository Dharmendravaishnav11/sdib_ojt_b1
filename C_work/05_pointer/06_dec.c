#include<stdio.h>
 int main ()
 {
        int a =5, b=4;
        int *ptr1, *ptr2;
        ptr1= &a;
        ptr2 = &b;
        printf(" pointer ptr1 before decrement");
        printf(" %d\n", ptr1);
      ptr1--;
        printf(" pointer ptr1  after decrement ");
        printf("%d\n",ptr1);

        printf(" poinrt ptr2 before decrement : is %d\n", ptr2);
      ptr2--;
        printf("pointer after decrement is  %d\n",ptr2);

        return 0;
 }