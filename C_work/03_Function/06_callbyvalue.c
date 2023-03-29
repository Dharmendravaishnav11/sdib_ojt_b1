#include <stdio.h>  
void swap(int , int); //prototype of the function(function declaration)
int main()  
{  
    int a = 10;  
    int b = 20;   
    printf("Before swapping the values in main a = %d, b = %d\n",a,b); 
    swap(a,b);  // function calling
    printf("After swapping values in main a = %d, b = %d\n",a,b);   
}  
void swap (int a, int b)  //function defination
{  
    int temp;   
    temp = a;  
    a=b;  
    b=temp;  
    printf("After swapping values in function a = %d, b = %d\n",a,b); // Formal parameters, a = 20, b = 10   
}  