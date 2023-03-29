#include<stdio.h>
int main()
{
union Job
{
    float salary;
    int workerNo;
}j;

j.salary=12.3;
j.workerNo=100;

    printf("Salary =%.1f\n ",j.salary);
    printf("\nNumber of workers =%d\n",j.workerNo);
return 0;
}
