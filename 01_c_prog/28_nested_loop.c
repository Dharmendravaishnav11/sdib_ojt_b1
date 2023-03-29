#include <stdio.h>
int main()
{
    int i;  
    int j;  
    for( i=1; i<=5; i++)
    {
        for( j=1; j<=10; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
 
    return 0;
}