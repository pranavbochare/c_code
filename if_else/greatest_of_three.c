#include <stdio.h>
int main()
{
    int a;
    printf("enter a first number : ");
    scanf("%d", &a);
    int b;
    printf("enter a second number : ");
    scanf("%d", &b);
    int c;
    printf("enter a third number : ");
    scanf("%d", &c);
    if (a > b && a > c)
    {
        printf("%d is greatest", a);
    }
    if (b > c && b > a)
    {
        printf("%d is greatest", b);
    }
    if (c > b && c > a)
    {
        printf("%d is greatest", c);
    }
    return 0;
}