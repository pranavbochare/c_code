#include <stdio.h>
int stair(int n)
{
    if (n == 1 || n == 2)
        return n;
    if (n == 3)
        return 4; 

    int totalways = stair(n - 1) + stair(n - 2) + stair(n - 3);
    return totalways;
}
int main()
{
    int a;
    printf("enter floors of building : ");
    scanf("%d", &a);
    int ways = stair(a);
    printf("%d", ways);
    return 0;
}