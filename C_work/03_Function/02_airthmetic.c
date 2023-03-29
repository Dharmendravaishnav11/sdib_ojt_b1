#include<stdio.h>
     int add(int a,int b)//function declaration (above the main)
     {
	 int add(int a, int b);
	 int c;
	 c=  a +  b;
     
     	//printf("%d",c);//function defination(outside the main ) formal value
     	return c;   // function with argument and with return value
	 }
	 void sub() //function without arguments and without return value
	 {
	 	int a=5,b=6,c;
	 	c=b-a;
	 	printf("%d\n",c);	
	 }
	 void mul(int a,int b)//with arguments and without return value
	 {
	 	int c=a*b;
	 	printf("%d\n",c);	
	 }
	 int div()
	 {
	 	int a=10,b=5;
	 	float c= a/b;
	 	return c;
	 }
	 
	 
	 
	 int main()
   {
	   int a ,b,c,d;
	 printf("enter two value");
	   scanf("%d %d",&a,&b);
	   c= add(a,b);
	   printf("%d\n",c);
	   sub();
	   mul(a,b);
	   int e=div();
	   printf("%d\n",e);
	   
	   
	  
	  			  // function calling(inside the main) auctual value
	   return 0;
	   

        }