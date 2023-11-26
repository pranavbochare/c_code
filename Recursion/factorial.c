#include <stdio.h>
int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}
int main()
{
    int a;
    printf("enter a number : ");
    scanf("%d", &a);
    int fact = factorial(a);
    printf("%d", fact);
    return 0;
}