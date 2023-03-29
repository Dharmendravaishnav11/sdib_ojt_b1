#include<stdio.h>
 int main()
   {
      int arr[]={12,23,34,45,23,34,45,67,45,67,45};
        int i;
        for(i=0;i<11;i++)
        {
            printf("the address of %d arrey is %d\n",&arr[i]);
        }  




    return 0;
   }