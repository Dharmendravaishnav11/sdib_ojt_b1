#include<stdio.h>
 int main()
{
      int  marks[5]={34,56,43,45,56};
       int avg;
     printf("the frist student marks is %d\n", marks[0]);
    printf("the  second student marks is %d\n", marks[1]);
    printf("the third student marks is %d\n", marks[2]);  
    printf("the fourth student marks is %d\n", marks[3]);
    printf("the fifth student marks is %d\n", marks[4]);
      avg = (marks[0]+ marks[1]+ marks[2]+ marks[3]+ marks[4])/5;
       if(avg>40)
       {
        printf(" congrate you  have pass\n");
       }
       else{
        printf("  sorry youn fail");

       }
      printf(" the  avegage  of the  student masrks is %d\n", avg);
      return 0;
}