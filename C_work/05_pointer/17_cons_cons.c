#include <stdio.h>  
int main()  
{  
    int a=10, b=20;  
    const int* const ptr=&a ;
    const int* const ptr1=&b;  

    //*ptr=12;  //wrong
   // ptr=&b;  //wrong
    printf("Value of ptr is :%d\n",*ptr);  
    printf(" the value of ptr is :%d\n",*ptr1);
    return 0;  
}