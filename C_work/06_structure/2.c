#include<stdio.h>
struct employee
{
    int id;
    char mystring[10];
    char mystring1[10];
    long salary;
};

int main()
{
struct employee s1;
s1.id=246;
strcpy(s1.mystring, "Some text");
s1.salary=20000;
printf("Enter a name:");
scanf("%s",&s1.mystring);
strcpy(s1.mystring1, "Electronics");
printf("\nName of employee is: %s\n",s1.mystring);
printf("Deignation of employee is: %s\n",s1.mystring1);
printf("id of employee is: %d\n",s1.id);
printf("salary of employee is: %ld\n",s1.salary);
printf("Size of structure is:%d",sizeof(struct employee ));
return 0;
}
