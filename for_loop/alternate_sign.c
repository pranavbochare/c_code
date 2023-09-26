#include<stdio.h>
int main()
{
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
     int sum=0;
     //1-2+3-4+5-6
    // for(int i=1;i<=n;i++){
    //     if(n%2!=0) sum=sum+i;
    //     else       sum=sum-i;
    // }
    // printf("the sum is %d",sum);
    if(n%2==0){
        sum=-n/2;
    }
    else{
        sum=-n/2+n;
    }
    printf("%d",sum);

    return 0;
}