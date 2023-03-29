#include<stdio.h>
#include<stdlib.h>
int main()
{
    char name[20],ch;
    FILE *fp;
    printf("\n enter new file name :");
    scanf("%[^\n]",&name);
    fp=fopen(name,"w+");
    printf("Value of the fp is:%d",fp);
    if (fp==NULL)
    {
        printf("\nFail to open %s file\n",name);
        exit(1);
    }
    printf("\nFile created");
    printf("\nEnter data into file & press \"Clte+d\" to end");
    while ((ch=getchar())!=EOF)
    {
        putc(ch,fp);
    }
    fseek(fp,10,SEEK_SET);
    printf("\n\n Data in file\n");
    while ((ch=getc(fp))!=EOF)
    {
        putchar(ch);
    }
    fclose(fp);
    
}
