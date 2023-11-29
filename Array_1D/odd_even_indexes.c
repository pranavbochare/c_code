#include<stdio.h>
int main()
{
    int arr[8]={1,2,3,4,5,6,7,8};
    for(int i=0;i<=7;i++){
        if(i%2==0){
            printf("%d ",10+arr[i]);
        }
        else
        {
            printf("%d ",2*arr[i]);
        }
    }
    return 0;
}