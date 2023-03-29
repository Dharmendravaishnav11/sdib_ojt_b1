#include<stdio.h>
#include<stdlib.h>
int main()
{
    char name[20],ch;
    FILE *fp;
    printf("\n enter new file name :");
    scanf("%[^\n]",&name);
    fp=fopen(name,"r");
    printf("Value of the fp is:%d",fp);
    if (fp==NULL)
    {
        printf("\nFail to open %s file\n",name);
        exit(1);
    }
    printf("\n Data in %s file\n",name);
    while ((ch=getc(fp))!=EOF)
            putchar(ch);
     fclose(fp);
    
}
