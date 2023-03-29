#include<stdio.h>
int main()
{
    FILE *fp;
    int *p;
    fp=fopen("Hello.txt","r");
    if(fp==NULL)
    {
        printf("File not found");
    }
    else{
        printf("File created");
    }
    return 0;
}