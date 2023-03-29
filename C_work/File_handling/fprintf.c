#include<stdio.h>
#include<stdlib.h>

typedef struct 
{
    int roll,age;
    char name[30],gender;
}student;
int main()
{
    char ch;
    student s;
    FILE *fp;
    fp=fopen("student.dat","w");
    printf("Enter student details");
    while (1)
    {
        printf("\nEnter student roll no:");
        scanf("%d",&s.roll);
        printf("\nEnter student Name:");
        scanf(" %[^\n]",s.name);
        printf("\nEnter student Age:");
        scanf("%d",&s.age);
        printf("\nEnter student Gender:");
        scanf("%d",&s.gender);
        printf("\n Continue ........(Y/N) :");
        scanf("%c",&ch);
        fprintf(fp,"\n%4d\t%-s\t%4d\t%1c",s.roll,s.name,s.age,s.gender);
        
        if (ch=='n' || ch=='N')
        {
            break;
        }
    
    }
    fclose(fp);
    
}
