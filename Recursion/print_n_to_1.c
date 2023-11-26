#include<stdio.h>
void decrease(int n){
    if(n==0) return;
    printf("%d ",n);
    decrease(n-1);
    return;
}
int main()
{
    int a;
    printf("enter number : ");
    scanf("%d",&a);
    decrease(a);
    return 0;
}