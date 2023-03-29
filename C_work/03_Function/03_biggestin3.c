#include<stdio.h>
  int biggest(int, int, int); // function prototype  and declearation formal parametrs 
  
    int main()  
{  
    int a, b, c;  
  
    printf("Enter 3 integer numbers\n");  
    scanf("%d%d%d", &a, &b, &c);  
      printf("Biggest of %d, %d and %d is %d\n", a, b, c, biggest(a, b, c));   // function callin 
      return 0;   // auctual perameters 
}  
  
// function definition  
int biggest(int x, int y , int z)   
{  
    if(x > y && x > z)  
    {  
       return x;  
    }  
    else  
    {  
       if(y > z)  
          return y;  
       else  
          return z;  
    }  
}  