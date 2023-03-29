#include <stdio.h>
int main()
{
    int a = 1;
    while(a <= 10)
    {
        printf("%d ", a);
        if(a > 3)
                break;
        a++;
    }
    return 0;
}