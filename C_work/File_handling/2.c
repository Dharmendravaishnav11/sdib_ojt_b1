#include<stdio.h>
#include<sys/fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
int main()
{
    
    int fd;
    fd=open("Student.dat",O_WRONLY|O_CREAT);
    if(fd==-1)
    {
        printf("Fail to create a file");
        exit(1);
    }
    else{
        printf("File created");
    }
    return 0;
}