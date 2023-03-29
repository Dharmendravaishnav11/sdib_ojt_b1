#include<stdio.h>
struct adhar
{
    char name;
    int age;
    int adhar_no;
    float height;
}s1;
int main()
{
printf("Size of structure is:%d\n",sizeof(struct adhar));
printf("Enter a name");
scanf("%s",&s1.name);
printf("Enter a age");
scanf("%d",&s1.age);
printf("Enter a adhar_no");
scanf("%d",&s1.adhar_no);
printf("Enter a height");
scanf("%f",&s1.height);
printf("\nName of student is:%s\n",s1.name);
printf("age of student is:%d\n",s1.age);
printf("adhar_no of student is:%d\n",s1.adhar_no);
printf("Height of student is:%f\n",s1.height);
return 0;
}

