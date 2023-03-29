#include <stdio.h>
 void swap(int* a, int* b);

  int  main()
  {
       int x = 3 , y = 4;
        swap(&x,&y);  

       printf(" x is = %d   y is = %d\n", x,y);
         return 0;
  } 
  void swap( int  * a , int* b)
  {
    int *t = *a;
     *a=*b;
     *b=*a;
     printf("a=%d b=%d \n" ,*a,*b);
  }
