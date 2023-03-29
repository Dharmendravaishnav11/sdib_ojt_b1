// call by value / pass by value 
#include<stdio.h>

  void square( int n ); // fun decelaration 
    int main()
    {
      int number=4;
      square( number); // function calling
      printf("  square no is = %d\n",number);   // formal  argument
       return 0;
    }
void square(int n) // fun defination 
{
   n = n* n;
    printf("the square is = %d\n",n   );   //auctual argument 
}
// value pass as a formal argument to auctual argument it's not affected the formal perameter value 
