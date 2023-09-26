#include<stdio.h>
int main()
{
    float p;
    printf("enter a principle value : ");
    scanf("%f",&p);
    float r;
    printf("enter a rate : ");
    scanf("%f",&r);
    float t;
    printf("enter a time : ");
    scanf("%f",&t);
    float si=(p*r*t)/100;
    printf("simple interest : %f",si);
    return 0;
}