#include<stdio.h>
struct std
{
    int roll_no;
    char *name;
}a[2];
void display(struct std a[])
{
    for (int i = 0; i < 2; i++)
    {
        printf("\nRoll no : %d \nName :%s",a[i].roll_no,a[i].name);
    }
    
}
int main()
{
    a[0].roll_no=1;
    a[0].name="Dharmendra";
    a[1].roll_no=2;
    a[1].name="Naresh";
    display(a);
    return 0;
}