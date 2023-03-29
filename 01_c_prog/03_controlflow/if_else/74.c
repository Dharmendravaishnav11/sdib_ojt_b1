// Youngest one:
#include<stdio.h>
int main()
{
int ram,shyam,raju;
printf("Enter the ages ");
scanf("%d %d %d",&ram,&shyam,&raju);
printf("The ages of ram=%d\n shyam=%d\n raju=%d",ram,shyam,raju);
if (ram<shyam && ram<raju)
{
   printf("\nram is youngest");
}
else if (shyam<ram && shyam<raju)
{
    printf("\nshyam is youngest");
}

else if (raju<ram && raju<shyam)
{
    printf("\nraju is youngest");
}

return 0;
}