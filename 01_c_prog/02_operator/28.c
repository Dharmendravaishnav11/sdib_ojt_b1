#include<stdio.h>
int main()
{
int a=50,b=5,result=0;
result=a&b;
printf("Binary AND operator of a and b is:%d\n",result);
result=a^b;
printf("Binary XOR operator of a and b is:%d\n",result);
result=~a;
printf("Binary AND operator of a and b is:%d\n",result);
result=a<<b;
printf("Binary right shift operator of a and b is:%d\n",result);
result=a>>b;
printf("Binary left shift operator of a and b is:%d\n",result);
return 0;
}