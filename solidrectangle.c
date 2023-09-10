#include<stdio.h>
int main()
{
    int n;
    printf("enter a number of rows : ");
    scanf("%d",&n);
    int m;
    printf("enter a number of column : ");
    scanf("%d",&m);
    for(int i=1;i<=n;i++)      // outer loop = number of lines
    {
        printf("\n");
        for(int i=1;i<=m;i++)  // inner loop = number of stars in each line
        printf("* ",i);
    }
    return 0;
}