#include <stdio.h>
void increase(int x, int n)
{
    if (x > n) return;
    printf("%d ", x);
    increase(x + 1, n);
    return;
}
int main()
{
    int a;
    printf("emter a number : ");
    scanf("%d", &a);
    increase(1, a);
    return 0;
}