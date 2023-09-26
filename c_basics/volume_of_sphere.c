#include<stdio.h>
int main()
{
    float r;
    printf("enter a radius of sphere : ");
    scanf("%f",&r);
    float volume;
    volume=4*3.14*r*r*r/3;
    printf("the volume is %f",volume);
    return 0;
}