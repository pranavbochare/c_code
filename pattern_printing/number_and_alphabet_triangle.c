#include<stdio.h>
int main()
{
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            for(int j=1;j<=i;j++)
            {
                printf("%d ",j);
            }
            printf("\n");
        }
        else
        {   int a=1;
            int d;
            for(int j=1;j<=i;j++)
            {
            int d = a+64;
            char ch = (char)d;
            a++;
            printf("%c ",ch);
            }
            printf("\n");
        }
    }
}