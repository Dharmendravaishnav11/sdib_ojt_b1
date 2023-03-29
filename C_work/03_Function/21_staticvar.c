
#include <stdio.h>
void say_hi();
int main() 
{    
  int i;
  for (i = 0; i < 5; i++) { say_hi();}
  return 0;
   }
void say_hi() 
{
  static int calls_number = 1;
  printf("Hi number %d\n", calls_number);
  calls_number ++; 
  }