#include<stdio.h>
struct marks
{
    int maths;
    int phy;
    int che;
}m;

struct student
{  
int id;
char name[10];
float height;
struct marks m;
}std;

int main()
{
printf("Size of structure is:%d\n",sizeof(struct student));
printf("Enter a name");
scanf("%s",&std.name);
printf("Enter a id");
scanf("%d",&std.id);
printf("Enter a height");
scanf("%f",&std.height);
printf("Enter a maths marks");
scanf("%d",&std.m.maths);
printf("Enter a phy marks");
scanf("%d",&std.m.phy);
printf("Enter a chemistry marks");
scanf("%d",&std.m.che);

printf("\nName of student is:%s\n",std.name);
printf("id of student is:%d\n",std.id);
printf("Height of student is:%f\n",std.height);
printf("Physics marks of student is:%d\n",std.m.phy);
printf("Chemistry marks of student is:%d\n",std.m.che);
printf("Maths marks of student is:%d\n",std.m.maths);
return 0;
}