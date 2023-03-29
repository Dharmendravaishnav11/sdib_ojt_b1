#include<stdio.h>
int main()
{
char name[20]="Dharmendra";
char pwd[20]="Dv11";
char pwd1[20];
char name1[20];
printf("Enter the name ");
scanf("%s",&name1);
printf("Enter the password ");
scanf("%s",&pwd1);

if (strcmp(name,name1)==0 && strcmp(pwd,pwd1)==0)
{
 printf("\nWelcome Dharmendra");
}
else{
    printf("\nTry again");
}

return 0;
}