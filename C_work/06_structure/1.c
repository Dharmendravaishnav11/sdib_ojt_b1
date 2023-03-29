#include<stdio.h>
struct student
{
    int id;
    char mystring[100];
    float height;
};

int main()
{
struct student s1;
s1.id=246;
strcpy(s1.mystring, "Some text");
s1.height=5.5;
printf("Enter a name:");
scanf("%s",&s1.mystring);
printf("Name of student is: %s\n",s1.mystring);
printf("id of student is: %d\n",s1.id);
printf("Heigh of student is: %f\n",s1.height);
return 0;
}
