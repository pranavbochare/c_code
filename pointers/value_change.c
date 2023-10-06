#include<stdio.h>
int main()
{
    int a=5;
    int* x=&a;
    *x=7;
    printf("%d",a);
    return 0;
}