#include <stdio.h>

int main(void) {
    int array1[] = { 1, 2, 3, 4, 5 };
    int array2[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Enter numbers: ");
        scanf("%d", &array2);
    }

    for (i = 0; i < 5; i++) 
   { 
    printf("%d\n",array2[i]);
   }
 if (array1[i] = array2[i]) 
   {
    printf(" element  equal open the door  \n");
   } 
  else 
   {
    printf("They are  not equal. plx try again \n");
   }

 return 0;
}
