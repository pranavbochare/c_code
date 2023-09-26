#include <stdio.h>
int main()
{
    float x;
    printf("enter a decimal number : ");
    scanf("%f", &x);
    int y = x;
    float z = x - y;
    printf("the fractional part is : %f", z);
    return 0;
}