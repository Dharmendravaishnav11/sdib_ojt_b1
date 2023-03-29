#include <stdio.h>  
int main()  
{  
    int num; 
    int count=0; 
    printf("Enter a number");  
    scanf("%d",&num);  
   count=func(num);  
   printf("Number of digits is : %d", count);  
     
    return 0;  
}  
int func(int n)  
{  
    int counter=0; 
    while(n!=0)  
    {  
        n=n/10;  
        counter++;  
    }  
    return counter;  
}  