#include<stdio.h>
int main()
{
    int a=5;
    int* x=&a;
    printf("%p\n",x); // %p se address print hota hai
    printf("%p",&x);
    return 0;
}