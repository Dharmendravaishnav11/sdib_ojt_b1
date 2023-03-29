#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdlib.h>
#include<error.h>

int mian()
{
    int fd,c;
    fd=open("/dev/ttyUSB0",O_RDONLY);
    printf("Fd value is : %d\n",fd);
    if (fd==-1)
    {
        perror("Device not found");
        exit(1);
    }
    printf("\nFile created succefully");
    while ((c=getchar()) !=EOF)
    {
        putchar(c);
    }
    
return 0;  
}