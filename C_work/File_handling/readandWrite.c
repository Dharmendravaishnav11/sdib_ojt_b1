#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdlib.h>
#include<windows.h>
void main()
{
    int fd,c,n=0,r=0,i=0;
    char *buf = "subham";
    char data[10];
    fd=open("COM3",O_WRONLY);
    printf("fd value is : %d\n",fd);
    if(fd==-1)
    {
        perror("Device not found ");
        exit(1);
    }
    n=write(fd,"HelloWorld",15);
    printf("No. of bytes written is: %d\n",n);
    close(fd);
    getch();

    fd=open("COM3",O_RDONLY);
    printf("fd value is : %d\n",fd);
    if(fd== -1)
    {
        perror("Device not found");
        exit(1);

    }
    r= read(fd,buf,15);
    printf("No of bytes written is : %d\n",r);
    for(i=0;i<sizeof(buf);i++)
    {
        printf("string of bytes is : %s\n",buf);
    }
    close(fd);
    getch();
}