 // call by refrence  the auctual valuue is also change
#include<stdio.h>
  void _square( int* n ); // fun decelaration 
    int main()
    {
      int number=4;
      _square(& number); // function calling
      printf("  square= %d\n",number);   // formal  argument
       return 0;
    }
void _square(int* n) // fun defination 
{
   *n = (*n)*(*n);
    printf("the square is = %d\n",*n);   //auctual argument 
}