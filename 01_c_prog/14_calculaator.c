#include<stdio.h>
 int main()
 {
    int a,b, op;
   printf( " enter the op + - * /.");
   scanf("%d", &op);
   printf("enter the no");
   scanf("%d %d",&a, &b);
   switch(op)
      {
    case '+':
          printf("  sum is  %d +%d =%d ", a+b);
          break;
    case '-':
          printf(" sub  is %d-%d = %d ", a-b);
          break;
    case '/':
          printf(" div is %d/%d =%d",a/b);
          break;
    case '*':
          printf(" mul. is %d*%d=%d", a*b);
          break;
   
    default: printf("you enter   diffrrent op.");
          }
          return 0;
 }