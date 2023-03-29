#include<stdio.h>
struct employee
{
    int id;
    char name;
    double d;
    float salary;
    unsigned int u;
};
int main()
{

    printf("Size of structure is: %d\n",sizeof(struct employee));
    return 0;
}