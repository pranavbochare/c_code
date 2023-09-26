#include<stdio.h>
int main()
{
    float r;
    printf("enter a radius of circle : ");
    scanf("%f",&r);
    float pi=3.1415;
    float area =pi*r*r;
    printf("area of circle : %f",area);
    return 0;
}