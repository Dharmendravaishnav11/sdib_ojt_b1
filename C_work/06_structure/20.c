#include<stdio.h>
#include<stdlib.h>

void main()
{
int *p,n,i;
printf("\n Enter How many elemnts");
scanf("%d",&n);
p=(int *)malloc(n*sizeof(int));
if (p==NULL)
{
    fprintf(stderr,"/Fall to alocat memory\n");
    exit(1);
}
printf("\nMemory allocat to:%x",p);
printf("\n Inital value\n");

for ( i = 0; i < n; i++)
   printf("%d\n",p[i]);
for ( i = 0; i < n; i++)
   p[i]=p[i]+1;
   printf("\n");
for ( i = 0; i < n; i++)
   printf("%d\n",p[i]);
     
    
}