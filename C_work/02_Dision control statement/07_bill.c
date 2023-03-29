#include<stdio.h>
int main()
{
     int  unit;
     printf(" enter the unit ");
     scanf("%d",&unit);
     if(unit>100){
        printf("the  bill ammount is %d", unit*3);
     } 
     if(unit>200)
     {
        printf( "the bill amount is %d", unit *4);
     }
     
     else 
     {
        printf( "your bill is low %d", unit*2);
     }
}