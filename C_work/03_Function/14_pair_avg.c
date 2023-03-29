#include<stdio.h>
void main()
{
    int x=30,y=56,z=80;
    pairwise(x,y,z);
    
}

int pairwise(int x, int y, int z)
{
    float avg1,avg2,avg3;
    avg1=(x+y)/2;
    printf("\n%f",avg1);
    avg2=(y+z)/2;
    printf("\n%f",avg2);
    avg3=(z+x)/2;
    printf("\n%f",avg3);
}