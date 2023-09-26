#include<stdio.h>
int main()
{
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    if(n<0){
        printf("the absolute value : %d",-n);
    }
    else{
        printf("the absolute value : %d",n);
    }
    return 0;
}