#include <stdio.h>
void name();     /*function declaration */
void message();  /*function declaration */
void main()
{
    name();
    message();
}
void name()     /*function definition */
{
    printf("Ram\n ");
}
void message()    /*function definition */
{
    name();
    printf("Hello\n");
}