#include <stdio.h>
int main()
{
    int n;
    printf("enter a first number : ");
    scanf("%d", &n);
    int m;
    printf("enter a second number : ");
    scanf("%d", &m);
    int power=1;
    for(int i=1;i<=m;i++){
        power=power*n;
    }
    printf("%d raised to the %d is %d",n,m,power);
    return 0;
}