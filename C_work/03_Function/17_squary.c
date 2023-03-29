#include<stdio.h>

int func(int);//declaration

int main()
{
int no, square;

printf("\n Enter an no : ");
scanf("%d",&no);  

square = func(no);//calling

printf("\n Square of no is : %d ", square);
}

int func(int temp) //defination
{
return temp*temp;
}