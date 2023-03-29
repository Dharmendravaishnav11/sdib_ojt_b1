#include<stdio.h>

int main(int argc,char *argv[])
{
    enum Days{mon,tue,wed ,thu,fri,sat,sun};
    enum Days eday=mon;
    printf("mon=%d\n",eday);
    eday=tue;
    printf("tue=%d\n",eday);
return 0;
}