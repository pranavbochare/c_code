#include<stdio.h>
int main()
{
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    if(n%4==0){
        printf("is is a leap year");
    }
    else{
        printf("it is not a leap year");
    }
    return 0;
}