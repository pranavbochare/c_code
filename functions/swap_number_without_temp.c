#include<stdio.h>
int main()
{
    int a;
    printf("enter a : ");
    scanf("%d",&a);
    int b;
    printf("enter b : ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The value of a : %d\n",a);
    printf("The value of b : %d",b);
    return 0;
}