#include<stdio.h> 
  void arr(int[] [3]);
   int main()
{ 
    int a[2][3] = {{1,2,3} , {4,5,6}};
    int b[2][3] = {1,2,3,4,5};
    int c[2][3] = {{3,4}, {4}};
        printf("value  is arr a by row\n");
        arr(a);
        printf("value of arr b by row\n");
        arr(b);
        printf(" vsluse of arr c by row \n");
        arr(c);
       return 0;

}
void arr(int x[][3])
{
   int i;     
   int j;      
   for (i = 0; i <= 1; ++i)
   {
      for (j = 0; j<= 2; ++j)
      {
         printf("%d", x[i][j]);
      }       
      printf("\n");
   }          
}
    
   
   