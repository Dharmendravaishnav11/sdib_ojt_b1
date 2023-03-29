#include <stdio.h>
double power(double num);
int main()
{
    int num;
    double c;
    printf("Enter any number: ");
    scanf("%d", &num);
    c = power(num);
   printf("Cube of %d is %f", num, c); 
       return 0;
}
double power(double num)
{
    return (num * num * num *num);
}