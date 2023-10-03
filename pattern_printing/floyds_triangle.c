#include<stdio.h>
int main()
{
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    int a=1;
    for(int i=1;i<=n;i++)
    { 
        for(int j=1;j<=i;j++)
        {
            printf("%d ",a);   // 1       use : a=a+2;
            a++;               // 3 5
        }                      // 7 9 11
        printf("\n");
    }
    return 0;
}