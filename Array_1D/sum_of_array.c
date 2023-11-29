#include<stdio.h>
int main()
{
    int sum=0;
    int arr[5]={1,3,5,7,10};
    for(int i=0;i<=4;i++){
        sum=sum+arr[i];
    }
    printf("%d",sum);
    return 0;
}