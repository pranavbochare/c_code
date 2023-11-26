#include <stdio.h>
int fibbo(int n)
{
    if (n == 1 || n == 2) return 1;
    return fibbo(n - 1) + fibbo(n - 2);
}
int main()
{
    int a;
    printf("enter a number : ");
    scanf("%d", &a);
    printf("%d", fibbo(a));
    return 0;
}