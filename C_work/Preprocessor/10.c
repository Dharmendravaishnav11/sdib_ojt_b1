#include<stdio.h>

void disp();
int main()
{
    int a=10,b=-10;
    printf("\n File in use :%s \n",__FILE__);
    printf("\n Present line :%d \n",__LINE__);
    printf("\n Present Function :%s \n",__func__);
    disp();
    printf("\n Present Date :%s",__DATE__);
    printf("\n Standard C :%d\n",__STDC__);
    printf("\n");
}
void disp()
{
    printf("\n Present Function :%s",__FUNCTION__);
}
