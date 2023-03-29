#include<stdio.h>
#define MAX 10
#define MIN 20

int main()
{
    #if MAX
        #if defined MIN
                #if(MAX>0 && MIN>0)
                   printf("\n Positive no");
                 #else
                     printf("\n Negative no");
               #endif
         #else
               printf("\n Error : MIN not definrd\n");
         #endif
    #else
       printf("\nError : MAx not defined");
        #endif
    
}