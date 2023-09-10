#include<stdio.h>
int main()
{
    float x;
    printf("enter the decimal number : ");
    scanf("%f",&x);
    int y;
    y=x;
    float z;
    z=x-y;
    printf("fractional part : %f",z);
    return 0;
}