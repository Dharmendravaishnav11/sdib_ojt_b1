#include<stdio.h>
int main()
{
int amount;
int note500,note200,note100,note50,note20,note10;
note500=note200=note100=note50=note20=note10=0;
printf("Enter a amount");
scanf("%d",&amount);
printf("Total number of notes = \n");
if(amount>=500)
 {
    note500=amount/500;
    amount -=note500*500;
    printf("500 = %d\n", note500);
 }
   if(amount>=200)
 {
    note200=amount/200;
    amount -=note200*200;
    printf("200 = %d\n", note200);
 }
  if(amount>=100)
 {
    note100=amount/100;
    amount -=note100*100;
    printf("100 = %d\n", note100);
 }
   if(amount>=50)
 {
    note50=amount/50;
    amount -=note50*50;
    printf("50 = %d\n", note50);
 }
   if(amount>=20)
 {
    note20=amount/20;
    amount -=note20*20;
    printf("20 = %d\n", note20);
 }
   if(amount>=10)
 {
    note10=amount/10;
    amount -=note10*10;
    printf("10 = %d\n", note10);
 }

}
