#include <stdio.h>
int main()
{
    int a;
    printf("enter divident : "); // a>b
    scanf("%d", &a);             // a%b=remainder
    int b;
    printf("enter divisor : ");
    scanf("%d", &b);
    int quotient = a / b;
    int remainder = a - (b * quotient);
    printf("remainder is : %d", remainder);
    return 0;
}