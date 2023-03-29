#include<stdio.h>
int main()
{
char ch;
printf("Enter the character");
scanf("%c",&ch);
if(((ch>='a') && (ch<='z')) || (ch>='A') && (ch<='Z'))
{
    printf("Character is Alphabet");
}
else{
    printf("Character is not Alphabet");
}
return 0;
}