#include <stdio.h>
int main()
{
    int n, rem, temp, sum = 0;
    printf("\nEnter a number : ");
    scanf("%d", &n);
    for(temp = n; temp != 0;)
    {
        rem = temp % 10;
        sum = sum + (rem* rem* rem);
        temp = temp /10;
    }
    if (sum == n && n != 0)
        printf("It is an Armstrong number");
    else
        printf("It is not an Armstrong number");
    return 0;
}