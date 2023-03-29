#include<stdio.h>
#include<stdlib.h>

typedef struct 
{
    int roll,age;
    char name[30],gender;
}student;
int main()
{
    student s;
    FILE *fp;
    fp=fopen("student.dat","r");
    printf("Enter student details");
    while ((fscanf(fp,"\n%d %[^\t] %d %c",&s.roll,&s.name,&s.age,&s.gender))!=EOF)
    {
        printf("\n%5d %-20s %4d %1c",s.roll,s.name,s.age,s.gender);
    }
    printf("\n");
    fclose(fp);
return 0;
}
