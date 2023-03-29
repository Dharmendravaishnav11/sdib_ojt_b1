#include<stdio.h>
   double cube(double num); //variable decalration before the main
   int main()
   {
       double c;
       int num;
       printf("enter any no.");
       scanf("%d",&num);
         
         c=cube(num);    //function calling inside the main
         printf("the cube num=%f",c);
         return 0;
         }
     double cube( double num)//function defination  above the main

{
    return(num*num*num);  
}
 