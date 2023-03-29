#include<stdio.h>
int main()
{
int no;
printf("Enter week no(1-7)");
scanf("%d",&no);
if(no==1)
{
    printf("Sunday");
}
else if(no==2)
{
    printf("Monday");
}
else if(no==3)
{
    printf("Tuesday");
}
else if(no==4)
{
    printf("Wednesday");
}
else if(no==5)
{
    printf("Thursday");
}
else if(no==6)
{
    printf("Friday");
}
else if(no==7)
{
    printf("Saturday");
}
else{
    printf("Wrong no");
}
return 0;
}