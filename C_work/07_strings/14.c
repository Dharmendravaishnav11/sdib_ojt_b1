#include<stdio.h>
union unionJob
{
    char name[32];
    float salary;
    int workerNo;
}uJob;

struct structJob
{
    char name[32];
    float salary;
    int workerNo;
}sJob;
int main()
{
    printf("Size of union  =%ld bytes",sizeof(uJob));
    printf("\nSize of structure  =%ld bytes\n",sizeof(sJob));
return 0;
}
