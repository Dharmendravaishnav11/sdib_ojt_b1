#include <stdio.h>
#define SIZE 4
int main()
{
   int arr[SIZE];
   int *ptr = arr;
   int i;
   printf("Enter %d array elements: ",SIZE);
   while(ptr < &arr[SIZE])
   {
      scanf("%d", ptr);
      ptr++;
   }
   ptr = arr;
   printf("Elements in array are: ");
   for(i=0; i < SIZE; i++)
   {
     printf("%d, ", *(ptr +i));
   }
   return 0;
}
