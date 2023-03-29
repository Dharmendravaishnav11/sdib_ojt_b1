#include<stdio.h>

int main()
{
    char* _ptr=NULL;
    _ptr=malloc(0);
    if (_ptr=NULL)
    {
        printf("_ptr is NULLL");
    }
    else{
        printf("_ptr is not NULL");
    }
    printf("%p",_ptr);
    *_ptr ='@';
    printf("%c\n",*_ptr);
    free(_ptr);

return 0;    
}