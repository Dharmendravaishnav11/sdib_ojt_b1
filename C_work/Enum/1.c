#include<stdio.h>
enum weeks{sunday,monday,tuesday,wednesday,thursday,friday,saturday}day;
int main()
{
    int n;
    printf("Enter a no");
    scanf("%d",&n);
    switch (day)
    {
    case sunday:
        printf("Sunday");
        break;
    case monday:
        printf("Monday");
        break;
    case tuesday:
        printf("Tuesday");
        break;
    case wednesday:
        printf("Wednesday");
        break;
    case friday:
        printf("Friday");
        break;
    case saturday:
        printf("Saturday");
        break;
    default:
        printf("Wrong no");
        break;
    }
    return 0;
}