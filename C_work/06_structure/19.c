#include<stdio.h>
union student
{
 double id;
 int age;
 char name[20];
}s1;
int main()
{ 
    printf("Enter a name");
    scanf("%s",&s1.name);
    printf("Enter a id no");
    scanf("%ld",&s1.id);
    printf("Enter a age");
    scanf("%d",&s1.age);
    printf("\n%d",sizeof(s1));
    printf("\n%s",s1.name);
    printf("\n%ld",s1.id);
    printf("\n%d",s1.age);
    
    return 0;
}