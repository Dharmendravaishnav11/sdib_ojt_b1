#include <stdio.h>
int main()
{
    int n, n1 = 0, n2 = 1, temp;
    printf("\nEnter a number : ");
    scanf("%d", &n);
    if(n >= 1)
    {
        printf("%d %d ", n1, n2);
        temp = n1 + n2;
        
        for(; temp <= n;)
        {
                printf("%d ", temp);
                n1 = n2;
                n2 = temp;
                temp = n1+n2;
        }
    }    
    else
        printf("please enter a number greater than zero");
}