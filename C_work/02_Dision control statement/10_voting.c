#include <stdio.h> 
int main() 
{ 
    int i ;
    printf( " enter the value of i ");
    scanf("%d", &i);
    if (i > 10) 
    { 
    if (i < 20)  {
    printf("i is smaller you can vote for n students"); 
    } 
    
    else
    printf(" you can vote for  seniors"); 
    } 
    else
    {
    printf(" sorry you are  not eligable  for votting");
    }
   return 0; 
}