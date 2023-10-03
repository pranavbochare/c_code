#include <stdio.h>
int main()
{
    int n;
    printf("enter a row number : ");
    scanf("%d", &n);
    int nst = 2 * n;
    int nsp = 0;
    for (int i = 1; i <= 2 * n; i++)
    {
        for (int j = 1; j <= nst; j++)
        {
            printf("*", j);
        }
        for (int k = 1; k <= nsp; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= nst; j++)
        {
            printf("*", j);
        }
        if (i <= n)
        {
            nsp += 2;
            nst--;
        }
        else
        {
            nsp -= 2;
            nst++;
        }
        printf("\n");
    }
    for (int i = 1; i <= 4 * n; i++)
    {
        printf("*");
    }
    return 0;
}